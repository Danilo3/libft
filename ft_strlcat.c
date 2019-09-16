/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayellin <ayellin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 02:55:16 by ayellin           #+#    #+#             */
/*   Updated: 2019/09/16 09:54:11 by ayellin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
 **  The strlcat function copy and concatenate strings respectively. strlcat() take the full size of the buffer (not just the length) and guarantee to
     NUL-terminate the result (as long as size is larger than 0 or, in the case of strlcat(), as long as there
     is at least one byte free in dst).  Note that a byte for the NUL should be included in size.  Also note
     that strlcat() only operate on true ``C'' strings.  This means that for strlcat() both src and dst must be NUL-terminated.
     The strlcat() function appends the NUL-terminated string src to the end of dst.  It will append at most
     size - strlen(dst) - 1 bytes, NUL-terminating the result.

     The source and destination strings should not overlap, as the behavior is undefined.

     RETURN VALUES
     The strlcat() function return the total length of the string they tried to create.
     For strlcat() that means the initial length of dst plus the length of src.
     While this may seem somewhat confusing, it was done to make truncation detection simple.

     Note however, that if strlcat() traverses size characters without finding a NUL, the length of the string
     is considered to be size and the destination string will not be NUL-terminated (since there was no space
     for the NUL).  This keeps strlcat() from running off the end of a string.  In practice this should not hap-
     pen (as it means that either size is incorrect or that dst is not a proper ``C'' string).  The check exists
     to prevent potential security problems in incorrect code.
 */
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t n;
	size_t dlen;
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	n = size;
	while (n != 0 && dst[i] != '\0')
	{
		i++;
		n--;
	}
	dlen = i;
	n = size - dlen;
	if (n == 0)
		return(dlen + ft_strlen(src));
	while (src[j] != '\0') {
		if (n != 1) {
			dst[i++] = src[j];
			n--;
		}
		j++;
	}
	dst[i] = '\0';
	return(dlen + j);
}
