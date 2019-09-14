/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memove.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayellin <ayellin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 00:36:09 by ayellin           #+#    #+#             */
/*   Updated: 2019/09/14 01:15:07 by ayellin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// TODO: memrcpy
void	*ft_memmove(void *dest, const void *src, size_t len)
{
	t_uchar *pd;
	t_uchar *ps;

	pd = (t_uchar*)dest;
	ps = (t_uchar*)src;
	if (ps >= pd)
		ft_memcpy(dest, src, len);
	else
	{
		while ((int)(--len) >= 0)
			*(pd + len) = *(ps + len);
	}
	return (dest);
}