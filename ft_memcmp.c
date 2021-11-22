/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahimmi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 15:06:25 by ahimmi            #+#    #+#             */
/*   Updated: 2021/11/07 15:06:28 by ahimmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	const char	*str11;
	const char	*str22;
	int			i;

	i = 0;
	str11 = str1;
	str22 = str2;
	while (n--)
	{
		if (str11[i] != str22[i])
		{
			return ((unsigned char)str11[i] - (unsigned char)str22[i]);
		}
		i++;
	}
	return (0);
}
