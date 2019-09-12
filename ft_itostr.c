/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itostr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayellin <ayellin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 16:51:32 by ayellin           #+#    #+#             */
/*   Updated: 2019/09/12 14:14:05 by ayellin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * *  Accepts an integer value and a pointer to a string. Converts an integer to a string.
 */

//TODO: MIN and MAX INT
void ft_itostr(int value, char *str)
{
	int is_int_min;
	int is_neg;
	size_t i;

	i = 0;
	is_neg = 0;
	is_int_min = 0;
	if (value < 0)
	{
		is_neg = 1;
		if (value == FT_INT_MIN)
		{
			value = FT_INT_MAX;
			is_int_min = 1;
		}
		if (!is_int_min)
			value = -value;
	}
	while (value)
	{
		str[i++] = (char)((value % 10) + '0');
		value /= 10;
	}
	if (is_neg)
		str[i++] = '-';
	if (is_int_min)
		str[0] = '8';
	str[i] = '\0';
	ft_strrev(str);

}