/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 03:38:10 by anacaro3          #+#    #+#             */
/*   Updated: 2022/10/14 06:13:49 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substring;
	unsigned int	str_size;
	unsigned int	i;

	i = 0;
	str_size = ft_strlen(s);
	if (!s)
		return (NULL);
	if (start >= str_size)
		return (ft_strdup(""));
	if (str_size <= len)
		substring = malloc(str_size - start + 1);
	else
		substring = malloc(len + 1);
	if (!substring)
		return (NULL);
	s += start;
	while (*s && i < len)
	{
		substring[i] = *s++;
		i++;
	}
	substring[i] = '\0';
	return (substring);
}
/*
int main (void)
{
	char const str[] = "carambolas"; 
	size_t max_len = 4;
	unsigned int strt = 3 ;
	printf("%s\n", ft_substr(str, strt, max_len));
	return(0);
}
*/