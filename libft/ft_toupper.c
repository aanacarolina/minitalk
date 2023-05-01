/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 03:38:28 by anacaro3          #+#    #+#             */
/*   Updated: 2022/09/17 04:09:08 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	else
		return (c);
}
/*
int main (void)
{
	int lower = 'c';
	int upper = 'C';
	printf(":%i:\n", ft_toupper(lower));
	printf(":%i:\n", ft_toupper(upper));
	return(0);
}
*/