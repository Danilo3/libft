/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strnlen.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayellin <ayellin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 19:29:31 by ayellin           #+#    #+#             */
/*   Updated: 2019/09/17 19:39:15 by ayellin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "minunit.h"

static char *test_simple()
{
	const char *str = "abcdefg";
	size_t max = 10;

	mu_assert_i("[ft] != [st]", ft_strnlen(str, max), strnlen(str, max));
	return (0);
}

static char *test_len_equal_max()
{
	const char *str = "Hello, world";
	size_t max = strlen(str);

	mu_assert_i("[ft] != [st]", ft_strnlen(str, max), strnlen(str, max));
	return (0);
}

static char *test_max_less_len()
{
	const char *str = "Hello, world";
	size_t max = strlen(str) - 2;

	mu_assert_i("[ft] != [st]", ft_strnlen(str, max), strnlen(str, max));
	return (0);
}

static char *test_zero()
{
	const char *str = "Hello, world";
	size_t max = 0;

	mu_assert_i("[ft] != [st]", ft_strnlen(str, max), strnlen(str, max));
	return (0);
}

#define TEST_MAX_ULLONG (18446744073709551615u)

static char *test_max_size_t()
{
	const char *str = "Hello, world";
	size_t max = TEST_MAX_ULLONG;

	mu_assert_i("[ft] != [st]", ft_strnlen(str, max), strnlen(str, max));
	return (0);
}

int main()
{
	test_all("FT_STRNLEN", 5,
			test_simple,
			test_len_equal_max,
			test_max_less_len,
			test_zero,
			test_max_size_t);
	return (0);
}