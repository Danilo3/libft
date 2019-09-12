/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memcmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayellin <ayellin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 14:41:16 by ayellin           #+#    #+#             */
/*   Updated: 2019/09/12 15:28:31 by ayellin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "minunit.h"
#include "libft.h"

static char *test_simple()
{
	const char	*s1;
	const char	*s2;
	int			diff;

	s1 = "Hello, world";
	s2 = "Hello, worad";
	diff = ft_memcmp(s1, s2, strlen(s1));

	mu_assert_i("diff between s1 and s2 must be equal 11", diff, 11);
	mu_assert_i("[ft] != [st]", ft_memcmp(s1, s2, 12), memcmp(s1, s2, 12));
	return (0);
}

static char *test_from_man()
{
	const char	*s1;
	const char	*s2;
	int			diff;

	s1 = "\200";
	s2 = "\0";
	diff = ft_memcmp(s1, s2, strlen(s1));

	mu_assert_i("diff between s1 and s2 must be equal 128", diff, 128);
	mu_assert_i("[ft] != [st]", ft_memcmp(s1, s2, 12), memcmp(s1, s2, 1));
	return (0);
}

//#include <stdio.h> //delete

int main()
{
	//char ch = (char)'\200';
	//printf("char - [%c]\n int - [%d]\n, str - [%s]\n signed char - [%d]\n", '\200', 0x200, "\200", ch);
	test_all("FT_MEMCMP", 2, test_simple, test_from_man);
}
