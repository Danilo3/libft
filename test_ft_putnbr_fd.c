/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_putnbr_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayellin <ayellin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 18:35:25 by ayellin           #+#    #+#             */
/*   Updated: 2019/09/16 18:48:51 by ayellin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minunit.h"
#include "libft.h"

static char *test_simple()
{
	ft_putnbr_fd(1, 1);
	ft_putchar('\n');
	ft_putnbr_fd(FT_INT_MIN, 1);
	ft_putchar('\n');
	ft_putnbr_fd(-0, 1);
	ft_putchar('\n');
	ft_putnbr_fd(-1, 1);
	ft_putchar('\n');
	ft_putnbr_fd(-10, 1);
	ft_putchar('\n');
	ft_putnbr_fd(-10202, 1);
	ft_putchar('\n');
	return (0);
}

int main()
{
	test_simple();
	return (0);
}