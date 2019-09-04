/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayellin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 20:09:59 by ayellin           #+#    #+#             */
/*   Updated: 2019/09/04 20:10:45 by ayellin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isdigit(char ch)
{
	return (ch >= 1) && (ch <= 9);
}