/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayellin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 17:23:18 by ayellin           #+#    #+#             */
/*   Updated: 2019/09/04 20:26:16 by ayellin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void *ft_memset(void *s, int c, size_t n)
{
	char *ptr;
	size_t i;

	i = 0;
	ptr = (char*)s;
	while (i < n)
		ptr[i++] = (unsigned char)c;
	return ptr;
}
