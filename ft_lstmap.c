/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihhaioue <ihhaioue@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 17:56:57 by ihhaioue          #+#    #+#             */
/*   Updated: 2026/10/20 23:18:23 by ihhaioue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*clear_map(t_list **list, void *content, void (*del)(void *))
{
	if (content)
		del(content);
	ft_lstclear(list, del);
	return (NULL);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*content;

	new_list = NULL;
	if (!f || !del)
		return (NULL);
	while (lst)
	{
		content = f(lst->content);
		if (!content)
			return (clear_map(&new_list, NULL, del));
		new_node = ft_lstnew(content);
		if (!new_node)
			return (clear_map(&new_list, content, del));
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}
