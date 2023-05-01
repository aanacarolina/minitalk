/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 03:36:01 by anacaro3          #+#    #+#             */
/*   Updated: 2022/09/17 03:51:38 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;

	d = dest;
	s = src;
	while (n--)
		*d++ = *s++;
	return (dest);
}
/*
int main (void)
{
	char dest;
	char src[] = "pizza";
	char *pdest = &dest;
	char *psrc = src;
	int size = 6;
	
	ft_memcpy(pdest, psrc, size);
	printf("%c\n", dest);
	
	memcpy(pdest, psrc, size);
	printf("%c\n", dest);
	return(0);
}
*/