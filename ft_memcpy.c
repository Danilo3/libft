/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayellin <ayellin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 16:36:41 by ayellin           #+#    #+#             */
/*   Updated: 2019/09/14 01:06:17 by ayellin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t i;
	t_uchar *pd;
	t_uchar *ps;

	pd = (t_uchar *)dst;
	ps = (t_uchar *)src;
	if (pd == FT_NULL && ps == FT_NULL)
		return (FT_NULL);
	i = 0;
	while (i < n)
	{
		pd[i] = ps[i];
		i++;
	}
	return (dst);
}
