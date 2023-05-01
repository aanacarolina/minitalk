/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 03:39:04 by anacaro3          #+#    #+#             */
/*   Updated: 2022/09/17 09:52:49 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*new_s;
	unsigned int	count;

	count = 0;
	new_s = ft_strdup(s);
	if (!new_s)
		return (new_s);
	while (new_s[count])
	{
		new_s[count] = f(count, s[count]);
		count++;
	}
	return (new_s);
}
