/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memcpy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayellin <ayellin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 15:44:58 by ayellin           #+#    #+#             */
/*   Updated: 2019/09/12 16:03:05 by ayellin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "minunit.h"

static char	*test_simple()
{
	char dest[100];
	const char *src;

	src = "Hello, world!";
	ft_memcpy(dest, src, strlen(src));
	mu_assert_str("src must be equal dest", src, dest);
	return (0);
}

static char *return_value_test()
{
	char dest[100];
	const char *src;
	char *ret_dst;

	src = "Hello, world!";
	ret_dst = ft_memcpy(dest, src, strlen(src));
	mu_assert_str("return value != src", (char *)ret_dst, src);
	return (0);
}

int	main()
{
	test_all("FT_MEMCPY", 2, test_simple, return_value_test);
	return (0);
}
