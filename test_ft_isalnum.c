/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isalnum.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayellin <ayellin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 00:00:10 by ayellin           #+#    #+#             */
/*   Updated: 2019/09/14 00:08:21 by ayellin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "minunit.h"
#include <ctype.h>
#include <stdio.h>


static char	*test_simple()
{
	int i;

	i = -1;
	while (i < 530)
	{
		if (isalnum(i) != ft_isalnum(i))
			printf("i = %d\n", i);
		i++;
	}
	return (0);
}

int main(void)
{
	test_all("ISALNUM_TEST", 1, test_simple);
	return (0);
}