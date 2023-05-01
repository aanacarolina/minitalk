/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 03:35:35 by anacaro3          #+#    #+#             */
/*   Updated: 2022/10/14 06:07:14 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_num(int n)
{
	int	i;

	i = 1;
	if (n < 0)
		i++;
	while (n >= 10 || n <= -10)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_transform(char *s, int len_n, int n)
{
	while (len_n >= 0)
	{
		s[len_n] = n % 10 + 48;
		n = n / 10;
		len_n--;
	}
	return ((char *)s);
}

char	*ft_itoa(int n)
{
	int		len_n;
	char	*s;
	int		sign;

	sign = 1;
	len_n = count_num(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	s = (char *)malloc(sizeof(char) *(len_n +1));
	if (!s)
		return (NULL);
	s[len_n] = '\0';
	len_n--;
	if (n < 0)
	{
		n = n * -1;
		sign = 0;
	}
	s = ft_transform(s, len_n, n);
	if (sign == 0)
		s[0] = '-';
	return (s);
}
