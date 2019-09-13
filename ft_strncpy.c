/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayellin <ayellin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 01:27:55 by ayellin           #+#    #+#             */
/*   Updated: 2019/09/14 01:54:49 by ayellin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	while (*src)
	{
		*dst = *src;
		dst++;
		src++;
	}
	while (len)
	{
		*dst = '\0';
		len--;
	}
	return (dst);
}
