/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayellin <ayellin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 19:42:55 by ayellin           #+#    #+#             */
/*   Updated: 2019/09/17 20:03:07 by ayellin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#define DEBUG
#include <assert.h>
int main()
{
	assert(1);
	int a = ft_atoi("-11");
	assert(a == -11);
	int n = ft_count_digits(11);
	assert(n == 2);
	assert(ft_isalnum('a'));
	assert(ft_isalpha('b'));
	assert(ft_isascii(' '));
	assert(ft_islower('z'));
	assert(ft_isprint('n'));
	assert(ft_isdigit('4'));
	assert(ft_isspace('\t'));
	void * memory = ft_memalloc(100);
	assert(memory);
	ft_bzero(memory, 100);
	ft_memdel(&memory);
	assert(memory == NULL);
	t_list *list = ft_lstnew( ft_strdup("lol1"), 5);
	list->next = ft_lstnew(ft_strdup("lol2"), 5);
	list->next->next = ft_lstnew(ft_strdup("str3"), 5);
	size_t len = ft_strlen((char*)list->next->content);
	assert(len == 4);
	char *pos = ft_memchr(list->content, '1', len);
	assert(*pos == '1');



}