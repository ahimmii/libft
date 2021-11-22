/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahimmi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 15:01:52 by ahimmi            #+#    #+#             */
/*   Updated: 2021/11/07 15:03:59 by ahimmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t number, size_t size)
{
	void	*p;

	if (number == 0 || size == 0)
	{
		number = 1;
		size = 1;
	}
	p = (void *) malloc(number * size);
	if (!p)
		return (NULL);
	ft_memset(p, 0, number * size);
	return (p);
}
