/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 03:38:02 by anacaro3          #+#    #+#             */
/*   Updated: 2022/10/14 05:01:30 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{	
	int	i;

	i = ft_strlen(s);
	if (c == 0)
		return ((char *)s + i);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}

/*
int main (void)
{
	const char word[] = "wordrs";
	int letter = 'r'; //returns 5
	int null_letter = 'z'; //returns null
	printf("%s\n", ft_strrchr(word, letter));
	printf("%s\n", ft_strrchr(word, null_letter));
	return(0);
}
*/