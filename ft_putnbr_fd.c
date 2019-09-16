/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayellin <ayellin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 19:53:53 by ayellin           #+#    #+#             */
/*   Updated: 2019/09/16 16:03:49 by ayellin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int is_neg;

	is_neg = 0;
	if (n < 0)
	{
		if (n == FT_INT_MIN)
		{
			ft_putstr_fd(FT_INT_MIN_STR, fd);
			return ;
		}
		n = -n;
		is_neg = 1;
	}
	if (n < 10)
	{
		ft_putchar_fd(n + '0', fd);
		if (is_neg)
			ft_putchar_fd('-', fd);
		return ;
	}
	ft_putnbr_fd(n / 10, fd);
	ft_putnbr_fd(n % 10, fd);
}
