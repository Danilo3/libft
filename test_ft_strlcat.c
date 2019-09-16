/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlcat.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayellin <ayellin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 07:46:56 by ayellin           #+#    #+#             */
/*   Updated: 2019/09/16 09:41:47 by ayellin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minunit.h"
#include "libft.h"

static char *test_simple()
{
	const char *src = "the cake is a lie!\0I'm hidden lol\r\n";
	char buff1[30] = "there is no stars in the sky";
	char buff2[30] = "there is no stars in the sky";
	size_t max = ft_strlen(src) + 4;
	ft_strlcat(buff1, src, max);
	strlcat(buff2, src, max);
	mu_assert_str("buff1 != buff2", buff1, buff2);
	return (0);
}

static char *test_return_values_basic()
{
	const char *src = " + src";
	char buff1[30] = "simple_buff";
	char buff2[30] = "simple_buff";
	char result[] = "simple_buf + src";

	size_t max = ft_strlen(buff2);
	size_t r1 = ft_strlcat(buff1, src, max);
	size_t r2 = strlcat(buff2, src, max);
	mu_assert_str("buff1[ft] != buff2[st]", buff1, buff2);
	mu_assert_ui("r1[ft] != r2[st]", r1, r2);
	return (0);
}

static char	*test_return_values_small()
{
	const char *src = "small";
	char buff1[4] ="";
	char buff2[4] = "";
	char result[4] = "sma";

	size_t max = 4;
	size_t ft_r = ft_strlcat(buff1, src, max);
	size_t st_r = strlcat(buff2, src, max);
	mu_assert_str("buff1[ft] != buff2[st]", buff1, buff2);
	mu_assert_ui("return[ft] != return[st]", ft_r, st_r);

	return (0);
}

static char	*test_return_values_strange()
{
	const char *src = "the cake is a lie !\0I'm hidden lol\r\n"; //
	char buff1[29] ="there is no stars in the sky";
	char buff2[29] = "there is no stars in the sky";
	size_t max = strlen(src) + 4; // max 23
	size_t ft_r = ft_strlcat(buff1, src, max);
	size_t st_r = strlcat(buff2, src, max);
	mu_assert_str("buff1[ft] != buff2[st]", buff1, buff2);
	mu_assert_ui("return[ft] != return[st]", ft_r, st_r);

	return (0);
}

static char	*tests_from_so()
{
	const char *src = "src";
	size_t size;

	size = 0;
	while (size < 9)
	{
		char dest_st[4] = "dst";
		char dest_ft[4] = "dst";
		size_t r_st = strlcat(dest_st, src, size);
		size_t r_ft = ft_strlcat(dest_ft, src, size);
		mu_assert_str("[ft] != [st]", dest_ft, dest_st);
		mu_assert_ui("[ret_ft] != [ret_st]", r_ft, r_st);
		size++;
	}
	return (0);
}


int main()
{
	test_all("FT_STRLCAT", 4,
			test_simple,
			test_return_values_basic,
			test_return_values_small,
			test_return_values_strange);
			//tests_from_so);
}
