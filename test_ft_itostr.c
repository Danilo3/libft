/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_itostr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayellin <ayellin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 13:11:20 by ayellin           #+#    #+#             */
/*   Updated: 2019/09/12 14:11:45 by ayellin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
#include "minunit.h"

/*
 * * for atoi
 */
#include <stdlib.h>

static char *test_simple()
{
	int		value;
	char	str[6];

	value = 12345;
	ft_itostr(value, str);
	mu_assert_i("value must be equal 12345", value, atoi(str));
	mu_assert_str("str[6] must be equal \"12345\"", str, "12345");
	return (0);
}

static char	*test_negative_simple()
{
	int		value;
	char	str[7];

	value = -12345;
	ft_itostr(value, str);
	mu_assert_i("-12345 must be equal atoi(str)", value, atoi(str));
	mu_assert_str("str[6] must be equal \"-12345\"", str, "-12345");
	return (0);
}

static char *test_min_max_int()
{
	int value;
	char str[12];
	value = FT_INT_MIN;
	ft_itostr(value, str);
	mu_assert_i("FT_MIN_INT must be equal atoi(str)", value, atoi(str));
	mu_assert_str("str[12] must be equal \"-2147483648\"", str, "-2147483648");
	return (0);
}


int		main()
{
	test_all("FT_ITOSTR", 3, test_simple, test_negative_simple, test_min_max_int);
	return (0);
}
