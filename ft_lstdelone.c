/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayellin <ayellin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 19:58:44 by ayellin           #+#    #+#             */
/*   Updated: 2019/09/15 01:30:20 by ayellin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	t_list *pl;

	pl = NULL;
	if (!alst || !*alst)
		return;
	pl = *alst;
	del(pl->content, pl->content_size);
	if (pl->content)
		free(pl->content);
	pl->content_size = 0;
	free(pl);
	pl = NULL;
}

