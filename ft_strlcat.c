/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayellin <ayellin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 02:55:16 by ayellin           #+#    #+#             */
/*   Updated: 2019/09/14 03:10:39 by ayellin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;
	size_t dst_len;
	size_t src_len;

	j = 0;
	i = ft_strlen(dst);
	dst_len = i;
	src_len = ft_strlen(src);

	if (dst_len + src_len > size)
		return (dst_len + src_len);
	if (size > dst_len + 1) {
		while (i < size - 1)
			dst[i++] = src[j++];
		dst[i] = '\0';
	}
	return (dst_len + src_len);
}