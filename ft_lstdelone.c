/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayellin <ayellin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 19:58:44 by ayellin           #+#    #+#             */
/*   Updated: 2019/09/14 20:09:52 by ayellin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	t_list *pl;

	pl = *alst;
	if (!alst || !*alst)
		return;
	del(pl->content, pl->content_size);
	if (pl->content)
		free(pl->content);
	pl->content_size = 0;
	ft_memdel(pl);
}

