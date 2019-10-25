/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strsplit.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayellin <ayellin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 11:17:36 by ayellin           #+#    #+#             */
/*   Updated: 2019/09/16 12:16:29 by ayellin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "minunit.h"
#include <stdlib.h>

//TODO: check possible memory leak

void free_arr(char **arr, size_t size)
{
	size_t i = 0;
	while (i < size)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

static char *test_simple()
{
	char const * str = "a b c";
	char ** splited_strs = ft_strsplit(str, ' ');
	
	mu_assert_str("first word wrong", splited_strs[0], "a");
	mu_assert_str("second word wrong", splited_strs[1], "b");
	mu_assert_str("third word wrong", splited_strs[2], "c");
	free_arr(splited_strs, 3);
	return (0);
}

static char *test_from_checker()
{
	char const * str = "split  ||this|for|me|||||!|";
	char ** splited_strs = ft_strsplit(str, '|');

	mu_assert_str("first word wrong", splited_strs[0], "split  ");
	mu_assert_str("second word wrong", splited_strs[1], "this");
	mu_assert_str("third word wrong", splited_strs[2], "for");
	mu_assert_str("forth word wrong", splited_strs[3], "me");
	mu_assert_str("fifth word wrong", splited_strs[4], "!");
	mu_assert("last value != NULL", splited_strs[5] == NULL);

	free_arr(splited_strs, 5);

	return (0);
}


int main()
{
	test_all("FT_STRSPLIT", 2, test_simple, test_from_checker);
	return (0);
}