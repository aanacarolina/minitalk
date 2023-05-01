/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 03:35:43 by anacaro3          #+#    #+#             */
/*   Updated: 2022/09/17 08:19:49 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned const char	*str;
	unsigned char		cont;

	str = (unsigned const char *)s;
	cont = (unsigned char) c;
	while (n-- > 0)
	{
		if (*str == cont)
			return ((void *)str);
		str++;
	}
	return (NULL);
}
/*
int main (void)
{
    unsigned char word = "fruits";
    unsigned char c = "ts";    
    size_t size = 5;

    printf("%s,\n", ft_memchr(word, c, size) )
}
*/