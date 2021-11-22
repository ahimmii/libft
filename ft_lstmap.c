/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahimmi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 15:06:25 by ahimmi            #+#    #+#             */
/*   Updated: 2021/11/07 15:06:28 by ahimmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*x;

	if (!lst || !f || !del)
		return (NULL);
	x = ft_lstnew(f((lst)->content));
	if (!x)
		return (0);
	lst = lst->next;
	new = x;
	while (lst)
	{
		x = ft_lstnew(f((lst)->content));
		if (!x)
		{
			ft_lstclear(&new, del);
			return (0);
		}
		ft_lstadd_back (&new, x);
		lst = lst->next;
		x = x->next;
	}
	return (new);
}
