/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strnstr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayellin <ayellin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 04:25:43 by ayellin           #+#    #+#             */
/*   Updated: 2019/09/16 10:39:36 by ayellin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "minunit.h"
#include "libft.h"

static char *test_simple()
{
	const char	*haystack;
	const char	*needle;
	size_t n;

	haystack = "haystack_with_needle";
	needle = "needle";
	n = ft_strlen(haystack);
	mu_assert_str("found != \"needle\"", ft_strnstr(haystack, needle, n), "needle");
	return (0);
}

static char *test_simple_with_less_n()
{
	const char	*haystack;
	const char	*needle;
	size_t n;

	haystack = "haystack_with_needle";
	needle = "needle";
	n = ft_strlen(haystack) - 2;
	char * result = ft_strnstr(haystack, needle, n);
	if (!result)
		mu_assert("result == NULL", FT_TRUE);
	else
		mu_assert("result != NULL", FT_FALSE);
	return (0);
}


int main(void)
{
	test_all("FT_STRNSTR", 2,
			test_simple,
			test_simple_with_less_n);
	return (0);
}