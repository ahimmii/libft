/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahimmi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 15:06:25 by ahimmi            #+#    #+#             */
/*   Updated: 2021/11/07 15:06:28 by ahimmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	size_t			x;
	char			*f;

	if (!s)
		return (0);
	i = start;
	if (ft_strlen(s + i) < len)
		len = ft_strlen(s + i);
	f = (char *)malloc(sizeof(*s) * (len + 1));
	x = 0;
	if (!f)
		return (0);
	while (i < ft_strlen(s) && x < len)
		f[x++] = s[i++];
	f[x] = '\0';
	return (f);
}
