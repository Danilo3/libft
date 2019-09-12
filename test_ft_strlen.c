/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlen.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayellin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 13:52:50 by ayellin           #+#    #+#             */
/*   Updated: 2019/09/11 15:34:33 by ayellin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "minunit.h"

size_t	ft_strlen(const char * str);

static char *test_simple()
{
	const char *str;

	str = "Hello, world!";
	mu_assert_ui("simple test", ft_strlen(str), 13);
	return(0);
}

static char *test_compare()
{
	const char *str;

	str = "Hello, world!\n";
	mu_assert_ui("compare test [ft] == [st]?", ft_strlen(str), strlen(str));
	return 0;
}

// static char *test_null()

int main()
{
	test_all("strlen test", 2, test_simple, test_compare);		
}
