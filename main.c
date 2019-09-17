/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayellin <ayellin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 19:42:55 by ayellin           #+#    #+#             */
/*   Updated: 2019/09/17 19:51:55 by ayellin          ###   ########.fr       */
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

}