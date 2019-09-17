/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayellin <ayellin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 16:14:02 by ayellin           #+#    #+#             */
/*   Updated: 2019/09/17 16:14:02 by ayellin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

double	ft_power(double base, int n)
{
	double temp;

	if (n == 0)
		return (1);
	temp = ft_power(base, n / 2);
	if ((n % 2) == 0)
		return (temp * temp);
	else if (n > 0)
		return (n * temp * temp);
	else
		return ((temp * temp) / base);
}
