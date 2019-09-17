/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_power.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayellin <ayellin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 20:30:53 by ayellin           #+#    #+#             */
/*   Updated: 2019/09/17 20:55:19 by ayellin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minunit.h"
#include "libft.h"

static char *test_simple()
{
	int base = 3;
	int n = 2;
	int result = ft_power(base, n);

	mu_assert_i("power is wrong", result, 9);
	mu_assert_i("power is wrong 2", ft_power(1, 5), 1);
	mu_assert_i("power is wrong 3", ft_power(0, 5), 0);
	mu_assert_i("power is wrong 4", ft_power(5, 0), 1);
	return (0);
}

int main()
{
	test_all("FT_POWER", 1, test_simple);
	return (0);
}