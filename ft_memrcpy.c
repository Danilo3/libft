/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memrcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayellin <ayellin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 00:44:54 by ayellin           #+#    #+#             */
/*   Updated: 2019/09/14 01:05:12 by ayellin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memrcpy(void *dest, const void *src, size_t len)
{
	t_uchar *pd;
	t_uchar *ps;

	pd = (t_uchar*)dest;
	ps = (t_uchar*)src;
	while ((--len) != 0)
		*(pd + len) = *(ps + len);
	*(pd) = *(ps);
	return (dest);
}
