/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_itoa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayellin <ayellin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 12:53:54 by ayellin           #+#    #+#             */
/*   Updated: 2019/09/16 12:53:54 by ayellin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "minunit.h"

static char	*test_zero_negative()
{
	mu_assert_str("must be zero", ft_itoa(-0), "0");
	return (0);
}

int main()
{
	test_all("FT_ITOA", 1, test_zero_negative);
}