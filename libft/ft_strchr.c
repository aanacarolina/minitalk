/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 03:37:07 by anacaro3          #+#    #+#             */
/*   Updated: 2022/10/14 01:58:22 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	ch;

	i = 0;
	ch = (unsigned char)c;
	while (s[i])
	{
		if (s[i] == ch)
			return ((char *)s + i);
		i++;
	}
	if (!ch && s[i] == '\0')
		return ((char *)s + i);
	return ((void *) 0);
}

/*
int main (void)
{
	const char word[] = "wrdro";
	int letter = 'r'; //returns 3
	int null_letter = 'z'; //returns null
	printf("%s\n", ft_strchr(word, letter));
	printf("%s\n", ft_strchr(word, null_letter));
	return(0);
}
*/