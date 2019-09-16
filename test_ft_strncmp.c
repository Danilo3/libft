/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strncmp.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayellin <ayellin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 17:24:18 by ayellin           #+#    #+#             */
/*   Updated: 2019/09/16 17:24:18 by ayellin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "minunit.h"

static char *test_simple()
{
	const char *s1 = "abc";
	const char *s2 = "abcde";
	size_t n = 3;

	mu_assert_i("[st] != [ft]", ft_strncmp(s1, s2, n), )
}

int main()
{
	test_all("FT_STRNCMP", 1, test_simple);
	return (0);
}