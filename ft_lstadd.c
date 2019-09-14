/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayellin <ayellin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 20:24:25 by ayellin           #+#    #+#             */
/*   Updated: 2019/09/14 20:43:09 by ayellin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_sltadd(t_list **alst, t_list *new)
{
	t_list *pl;

	pl = FT_NULL;
	if (!alst)
		return;
	pl = *alst;
	if (!pl)
		pl = new;
	else
	{
		while (pl->next)
			pl = pl->next;
		pl->next = new;
	}
}