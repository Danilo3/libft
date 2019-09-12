/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_putchar_fd.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayellin <ayellin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 18:38:26 by ayellin           #+#    #+#             */
/*   Updated: 2019/09/12 20:41:34 by ayellin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "minunit.h"

static char *simple_test()
{
	ft_putchar_fd(-94, 1); // 162
	ft_putchar_fd('\n', 1);
	return (0);
}

int	main()
{
	test_all("FT_PUTCHAR_FD", 1, simple_test);
	return (0);
}