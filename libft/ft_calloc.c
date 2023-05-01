/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 03:34:43 by anacaro3          #+#    #+#             */
/*   Updated: 2022/10/14 06:04:51 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*amount;
	size_t	total_size;

	total_size = nmemb * size;
	if (!size || size > 2147483647 / nmemb)
		return (NULL);
	amount = malloc (total_size);
	if (!amount)
		return (NULL);
	ft_memset(amount, 0, total_size);
	return ((void *)amount);
}
/*
int main (void)
{

	int *word;
	size_t size = sizeof (*word);
	word = ft_calloc(5, size);
	while(word < size)
	{
		printf("%i\n", word);
	}
	return(0);
}
*/
