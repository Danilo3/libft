/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_bzero.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayellin <ayellin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 22:00:54 by ayellin           #+#    #+#             */
/*   Updated: 2019/09/13 22:04:58 by ayellin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "minunit.h"

static char	*test_simple()
{
	char str[10];
	int i;

	i = 0;
	ft_bzero(str, 10);
	while (i < 10) {
		mu_assert("str is not filled with \\0", str[i++] == '\0');
	}
	return (0);
}

int main()
{
	test_all("BFT_BZERO", 1, test_simple);
}