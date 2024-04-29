/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cda-fons <cda-fons@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 20:28:45 by cda-fons          #+#    #+#             */
/*   Updated: 2024/04/29 21:05:15 by cda-fons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*node;
	t_list	*swap;

	swap = lst;
	if (!lst)
		return (0);
	newlst = (t_list *)malloc(sizeof(t_list));
	if (!newlst)
		return (0);
	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
		return (0);
	while (lst)
	{
		(*f)(lst->content);
		node = ft_lstnew(lst->content);
		newlst = ft_lstadd_back(newlst, node);
		swap = lst->next;
		(del)(lst->content);
		free(lst);
		lst = swap;
	}
	lst = NULL;
	return (newlst);
}
