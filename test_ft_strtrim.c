/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strtrim.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayellin <ayellin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 11:04:10 by ayellin           #+#    #+#             */
/*   Updated: 2019/09/16 11:10:23 by ayellin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "minunit.h"
#include <stdlib.h>

static char *test_simple()
{
	char const *s = " simple ";
	char *fresh = ft_strtrim(s);

	mu_assert_str("result != \"simple\"", fresh, "simple");
	free(fresh);
	return (0);
}
// TODO: add more tests!
int main()
{
	test_all("FT_STRTRIM", 1, test_simple);
	return (0);
}