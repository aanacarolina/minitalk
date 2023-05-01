/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 08:18:52 by anacaro3          #+#    #+#             */
/*   Updated: 2022/09/17 08:18:56 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const char	*s;
	char		*d;
	const char	*last_s;
	char		*last_d;

	s = (const char *) src;
	d = (char *) dest;
	last_s = (const char *) src + n;
	last_d = (char *) dest + n;
	if (dest < src)
		while (n--)
			*d++ = *s++;
	else
		while (n--)
			*--last_d = *--last_s;
	return (dest);
}
/*
int main (void)
{
	
}
*/