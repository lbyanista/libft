/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlabrayj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 20:01:26 by mlabrayj          #+#    #+#             */
/*   Updated: 2019/11/05 21:55:01 by mlabrayj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*r;
	t_list	*node;

	node = NULL;
	if (!f || !del)
		return (NULL);
	while (lst != NULL)
	{
		if (node == NULL)
		{
			if (!(r = ft_lstnew(f(lst->content))) && !f(lst->content))
				return (NULL);
			node = r;
		}
		else
		{
			if (!(node->next = ft_lstnew(f(lst->content))))
				ft_lstclear(&r, del);
			node = node->next;
		}
		lst = lst->next;
	}
	return (r);
}
