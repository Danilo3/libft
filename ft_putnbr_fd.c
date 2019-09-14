/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayellin <ayellin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 19:53:53 by ayellin           #+#    #+#             */
/*   Updated: 2019/09/14 19:53:57 by ayellin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h";

void ft_putnbr_fd(int n, int fd)
{
	char str[11];

	ft_itostr(n, str);
	ft_putstr_fd(str, fd);
}
