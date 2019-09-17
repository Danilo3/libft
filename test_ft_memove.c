/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memove.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayellin <ayellin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 16:33:48 by ayellin           #+#    #+#             */
/*   Updated: 2019/09/17 18:41:51 by ayellin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/* 	possible memrcpy realization in memmove
 ** while ((int)(--len) >= 0)
 **		(pd + len) = *(ps + len);
 */

#include "libft.h"
#include "minunit.h"
#include <stdio.h>

static char	*test_simple()
{
	unsigned char mem_ft[13] = "Hello World!";
	unsigned char mem_st[13] = "Hello World!";
	void	*mem1;
	void	*mem2;
	mem1 = ft_memmove(mem_ft, mem_ft + 6, 5);
	mem2 = memmove(mem_st, mem_st + 6, 5);
	mu_assert_mem("[ft_mem] != [st_mem]", mem1, mem2, 13);
	return (0);
}

static char *test_with_overlap()
{
	unsigned char mem_ft[13] = "Hello World!";
	unsigned char mem_st[13] = "Hello World!";
	void	*mem1;
	void	*mem2;
	size_t offset = 6;
	size_t len = 10;
	mem1 = ft_memmove(mem_ft + offset, mem_ft, 3);
	mem2 = memmove(mem_st + offset, mem_st, 3);
	mu_assert_mem("[ft_mem] != [st_mem]", mem1, mem2, strlen(mem2));
	return (0);
}

static char *test_from_toster()
{
	char st_str[] = "memmove can be very useful......";
	char ft_str[] = "memmove can be very useful......";
	void * mem_st = memmove(st_str + 20, st_str + 15, 11);
	void * mem_ft = ft_memmove(ft_str + 20, ft_str + 15, 11);
	mu_assert_mem("[ft] != [st]", mem_ft, mem_st, strlen(mem_st));
	return (0);
}

static char *test_from_checker()
{
	char *src = "thanks to @apellicc for this test !\r\n";
	char dst1[0xF0];
	size_t size = strlen(src);
	char *r1 = __builtin___memmove_chk (dst1, src, size , __builtin_object_size (dst1, 0));
	char *r2 = ft_memmove(dst1, src, size);
	mu_assert("addresses not equal", r1 == r2);

	r1 = __builtin___memmove_chk ("", "" - 1, 0, __builtin_object_size ("", 0));
	//r1 = memmove("", "" - 1, 0);
	//printf("from memmove: [%s]\n",  (char *) r1);
	r2 = ft_memmove("", "" - 1, 0);
	mu_assert("addresses not equal", r1 == r2);
	return (0);
}

static char *test_from_system()
{
	char st_s1[100] = "11111";
	char st_s2[100] = "abc";
	char *st_res = memmove(st_s1, st_s2,1);
	char ft_s1[100] = "11111";
	char ft_s2[100] = "abc";
	char *ft_res = ft_memmove(ft_s1, ft_s2,1);
	mu_assert_str("dest_ft != dest_st", ft_s1, st_s1);
	return (0);
}

int main()
{
	test_all("FT_MEMMOVE", 5,
			test_simple,
			test_with_overlap,
			test_from_toster,
			test_from_checker,
			test_from_system);
	return (0);
}

