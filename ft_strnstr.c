/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayellin <ayellin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 03:48:57 by ayellin           #+#    #+#             */
/*   Updated: 2019/09/14 04:40:10 by ayellin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t i;

	i = 0;
	if (needle[0] == '\0')
		return (char*)(haystack);
	while (haystack[i])
	{
		if (ft_strnstartswith(haystack + i, needle, n))
			return (char *)(haystack + i);
		i++;
	}
	return (FT_NULL);
}

