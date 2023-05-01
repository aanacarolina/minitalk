/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 03:37:24 by anacaro3          #+#    #+#             */
/*   Updated: 2022/10/12 03:06:45 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		++i;
	}
}

// void	ft_striteri(char *s, void (*f)(unsigned int, char *))
// {
// 	unsigned int	i;

// 	if (!s)
// 		return ;
// 	i = 0;
// 	while (s[i])
// 	{
// 		f(i, &s[i]);
// 		++i;
// 	}
// }