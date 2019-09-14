/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayellin <ayellin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 20:49:05 by ayellin           #+#    #+#             */
/*   Updated: 2019/09/15 01:30:20 by ayellin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
 ** allocates space for list of len elements
 */
//static t_list	*ft_lstalloc(size_t len)
//{
//	t_list *pl;
//	t_list *begin;
//	size_t i;
//
//	i = 1;
//	begin = ft_lstnew(NULL, 0);
//	if (!begin)
//		return (NULL);
//	pl = begin;
//	while (i < len)
//	{
//		pl = ft_lstnew(NULL, 0);
//		i++;
//	}
//	return (begin);
//}

static t_list	*ft_lstdup(t_list *src)
{
	t_list *new;
	void *new_content;

	new_content = malloc(src->content_size);
	ft_memmove(new_content, src->content, src->content_size);
	if (!new_content)
		return (NULL);
	new = ft_lstnew(new_content, src->content_size);
	if (!new)
		return (NULL);
	return (new);
}

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *pl;
	t_list **new;
	size_t len;
	size_t i;

	i = 1;
	pl = NULL;
	len = ft_lstlen(lst);
	if (!lst)
		return (NULL);
	new = (t_list**)malloc(sizeof(t_list*) * len);
	pl = lst;
	while(pl)
	{
		new[i] = ft_lstdup(f(pl));
		(new[i - 1])->next = new[i];
		pl = pl->next;
		i++;
	}
	new[i - 1]->next = new[i];
	return (new[0]);
}
