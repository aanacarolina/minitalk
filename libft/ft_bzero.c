/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 03:34:31 by anacaro3          #+#    #+#             */
/*   Updated: 2022/09/17 03:49:40 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*clean;

	clean = s;
	while (n != '\0')
	{
		*clean++ = 0;
		n--;
	}
}
/*
int main ()
{
	char word[] = "palavra";
	int size = 7;
	char word2[] = "palavra";
	int size2 = 7;
	ft_bzero(word, size);
	printf("%s\n", word);
	bzero(word2, size2);
	printf("%s\n", word2);
	return(0);
}
*/
