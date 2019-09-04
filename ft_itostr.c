/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itostr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayellin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 20:31:14 by ayellin           #+#    #+#             */
/*   Updated: 2019/09/04 21:12:44 by ayellin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define INT_MIN -2147483648
#define INT_MAX  2147483647

void ft_itostr(char *str, int value)
{
	int ndigits;
	int is_min_int;
	int sign;
	int i;

	i = 0;
	sign = 0;
	is_min_int = 0;
	ndigits = 0;
	if (value <= 0)
	{
		sign = 1; //str[i++] = '-';
		if (value == INT_MIN)
		{
			str[i++] = '8';
			value += 1;
		}
		value = -value;
	}
	
}
