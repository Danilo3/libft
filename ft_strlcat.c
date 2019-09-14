/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayellin <ayellin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 02:55:16 by ayellin           #+#    #+#             */
/*   Updated: 2019/09/15 02:11:27 by ayellin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t real_size;
	size_t init_dst_size;

	i = 0;
	real_size = 0;
	init_dst_size = ft_strlen(dst);
	while (src[real_size] && real_size < size)
		real_size++;
	ft_strncpy(dst, src, real_size);
	return (init_dst_size + real_size);
}