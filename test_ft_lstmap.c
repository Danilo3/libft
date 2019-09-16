/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lstmap.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayellin <ayellin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 13:11:18 by ayellin           #+#    #+#             */
/*   Updated: 2019/09/16 13:43:46 by ayellin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "minunit.h"

t_list *ft_lstmap_f(t_list *elem)
{
	elem = NULL;
	return ft_lstnew(ft_strdup("-1"), 3);
}

static char *test_simple()
{
	t_list *l = ft_lstnew(ft_strdup("1"), 2);
	t_list * ret;
	l->next = ft_lstnew(ft_strdup("2"), 2);
	l->next->next = ft_lstnew(ft_strdup("3"), 2);
	ret = ft_lstmap(l, ft_lstmap_f);
	mu_assert_str("first value wrong must be equal -1", ret->content, "-1");
	mu_assert_str("second value wrong, must be equal -1", ret->next->content, "-1");
	mu_assert_str("third value wrong, must be equal -1", ret->next->next->content, "-1");
	return (0);
}

int main()
{
	test_all("FT_LSTMAP", 1, test_simple);
	return (0);
}