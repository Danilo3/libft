/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayellin <ayellin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 14:26:12 by ayellin           #+#    #+#             */
/*   Updated: 2019/09/12 14:58:28 by ayellin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	v1;
	unsigned char	v2;
	char			*p1;
	char			*p2;

	i = 0l;
	p1 = (char *)s1;
	p2 = (char *)s2;
	while (i < n)
	{
		v1 = p1[i];
		v2 = p2[i];
		if (v1 != v2)
			return (v1 - v2);
		i++;
	}
	return (0);
}

