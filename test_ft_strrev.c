/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strrev.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayellin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 15:10:52 by ayellin           #+#    #+#             */
/*   Updated: 2019/09/11 16:36:46 by ayellin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "minunit.h"

char *ft_strrev(char *str);

static char *test_simple(void)
{
	char str[] = "abc";
	mu_assert_str("just test", ft_strrev(str), "cba");
	mu_assert_str("just test 2", ft_strrev(str), "abc");
	return (0);
}
static char *test_empty(void)
{
	char str[] = "";
	mu_assert_str("empty test 1", ft_strrev(str), "");
	return (0);
}

static char *test_one(void)
{
	char str[] = "a";
	mu_assert_str("single 1", ft_strrev(str), "a");
	return (0);
}

int main()
{
	test_all("ft_strrev test", 3, test_simple, test_empty, test_one);
}
