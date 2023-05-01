/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 03:37:53 by anacaro3          #+#    #+#             */
/*   Updated: 2022/10/14 01:55:02 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	size_little;
	size_t	i;
	int		result_fn;

	size_little = ft_strlen(little);
	i = 0;
	if (*little == '\0')
		return ((char *)big);
	while (big[i] && i <= len)
	{
		result_fn = ft_strncmp(&big[i], little, size_little);
		if (result_fn == 0 && i + size_little <= len)
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}

/*
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	size_t		j;
	const char	*str;
	const char	*to_find;

	i = 0;
	str = haystack;
	to_find = needle;
	if (to_find[i] == '\0')
		return ((char *) haystack);
	j = 0;
	while (str[i] != '\0' && j < len)
	{
		j = 0;
		while (str[i + j] == to_find[j] && str[i + j] != '\0' && i + j < len)
		{
			if (to_find[j + 1] == '\0')
				return (&((char *) str)[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
*/
/*
int main (void)
{
	char big[] = "Dude, where is my car";
	char little[] = "where";
	char emptybig[] = "";
	char emptylil[] = "";
	
	//printf("%d\n", ft_strnstr(big, little, 5));
	//printf("%s\n", ft_strnstr(emptybig, emptylil, 0));
	//printf("%s\n", ft_strnstr(emptybig, emptylil, -1));
	printf("%s\n", ft_strnstr(big, emptylil, 7));
	return (0);
}
*/