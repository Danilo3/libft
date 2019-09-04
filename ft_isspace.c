/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayellin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 20:21:05 by ayellin           #+#    #+#             */
/*   Updated: 2019/09/04 20:22:52 by ayellin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		isspace(int c)
{
	return ((c == '\t') || (c == '\n') || (c == '\v') || (c == '\f') || (c == '\r') || ( c == ' '));
}
