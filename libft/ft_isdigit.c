/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 03:35:18 by anacaro3          #+#    #+#             */
/*   Updated: 2022/09/17 03:55:10 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
/*
int main (void)
{
	int digit = '5';
	int non_digit = 85;
	printf ("%d\n", ft_isdigit(digit));
	printf ("%i\n",ft_isdigit(non_digit));
	return(0);
}
*/