/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strnstr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayellin <ayellin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 04:25:43 by ayellin           #+#    #+#             */
/*   Updated: 2019/09/14 04:29:02 by ayellin          ###   ########.fr       */
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
	n = 10;
	mu_assert_str("found != \"needle\"", ft_strnstr(haystack, needle, n), "needle");
	return (0);
}


int main(void)
{
	test_all("FT_STRNSTR", 1, test_simple);
	return (0);
}