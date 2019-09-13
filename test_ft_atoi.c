/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayellin <ayellin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 22:14:21 by ayellin           #+#    #+#             */
/*   Updated: 2019/09/13 22:27:47 by ayellin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "minunit.h"
#include <stdlib.h>


static char	*test_simple()
{
	int			num;
	const char	*str;

	str = "12345";
	num = ft_atoi(str);
	mu_assert_i("num != 12345", num, 12345);
	return (0);
}

static char	*test_negative_simple()
{
	int			num;
	const char	*str;

	str = "-12345";
	num = ft_atoi(str);
	mu_assert_i("num != -12345", num, -12345);
	return (0);
}
static char	*test_int_min()
{
	int			num;
	const char	*str;

	str = "-2147483648";
	num = ft_atoi(str);
	mu_assert_i("num != -2147483648", num, FT_INT_MIN);
	return (0);
}

static char	*test_int_max()
{
	int			num;
	const char	*str;

	str = "+2147483647";
	num = ft_atoi(str);
	mu_assert_i("num != +2147483647", num, FT_INT_MAX);
	return (0);
}

static char	*test_with_std_atoi()
{
	int num;
	const char *str;
	str = "+2147483648";
	num = ft_atoi(str);
	mu_assert_i("[ft] != [st]", num, atoi(str));
	return (0);
}

int main(void)
{
	test_all("FT_ATOI", 4,
			test_simple, test_negative_simple, test_int_min, test_int_max,
			test_with_std_atoi);
	return (0);
}