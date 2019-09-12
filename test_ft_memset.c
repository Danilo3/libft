/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memset.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayellin <ayellin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 16:18:02 by ayellin           #+#    #+#             */
/*   Updated: 2019/09/12 16:28:27 by ayellin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minunit.h"
#include "libft.h"

static char	*test_simple()
{
	char dest[11];
	char c;

	c = 'a';
	ft_memset(dest, c, 10);
	mu_assert_str("dest != \"aaaaaaaaaa\"", dest, "aaaaaaaaaa");
	return (0);
}

int main()
{
	test_all("FT_MEMSET", 1, test_simple);
	return (0);
}