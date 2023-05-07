/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 20:19:46 by anacaro3          #+#    #+#             */
/*   Updated: 2023/05/01 16:26:56 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

//this variable has to be global because it is used in the signal handler in order to store the received character. Otherwise, it would be reset to 0 every time the signal handler is called. It is also used to store the current bit position of the character being received. It is reset to 0 every time a character is printed. 
char	g_char = 0;


//this function prints the character received. It is called every time a SIGUSR1 or SIGUSR2 signal is received. It is also called when the character is fully received (i == 7). In this case, the character is printed and the bit position is reset to 0. The bit position is incremented every time a SIGUSR1 signal is received. While the bit position is less than 7, the function returns and waits for the next signal. When the bit position is 7, the character is fully received and printed. The bit position is reset to 0 and the client is notified that the character was received by sending a SIGUSR2 signal. Seven has been chosen because it is the number of bits in a char. kill() is used to send the signal to the client. The client's PID is stored in the structure siginfo_t, which is passed as an argument to the signal handler. The first argument is the signal number, the second is the structure siginfo_t and the third is the context. The context is not used in this function however it has to be declared because it is part of the signal handler prototype.
//Because the signal handler is called every time a signal is received, the function has to check which signal was received. If it was SIGUSR1, the bit position is incremented. If it was SIGUSR2, the bit position is reset to 0. The var i has to be static because it is used to store the bit position. If it was not static, it would be reset to 0 every time the signal handler is called. 
//SIGUSR1 is declared as the signal to increment the bit position. SIGUSR2 is declared as the signal to reset the bit position and print the character.

void	signal_handler(int signal, siginfo_t *siginfo, void *context)
{
	static int	i = 0;

	(void)context;
	if (signal == SIGUSR1)
		g_char += (1 << i);
	if (i == 7)
	{
		write(1, &g_char, 1);
		g_char = 0;
		i = 0;
		kill(siginfo->si_pid, SIGUSR2);
		return ;
	}
	i++;
	kill(siginfo->si_pid, SIGUSR1);
}

int	main(void)
{
	int					pid;
	struct sigaction	sig;

	sig.sa_sigaction = signal_handler;
	sig.sa_flags = SA_SIGINFO;
	pid = getpid();
	ft_putnbr_fd(pid, 1);
	ft_putchar_fd('\n', 1);
	sigaction(SIGUSR1, &sig, 0);
	sigaction(SIGUSR2, &sig, 0);
	while (1)
		pause();
	return (0);
}