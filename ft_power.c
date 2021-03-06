/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayellin <ayellin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 16:14:02 by ayellin           #+#    #+#             */
/*   Updated: 2019/09/17 20:42:27 by ayellin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_power(int base, unsigned int pow)
{
	if (pow == 0)
		return (1);
	else
		return (ft_power(base, pow - 1) * base);
}
