/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayellin <ayellin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 03:48:57 by ayellin           #+#    #+#             */
/*   Updated: 2019/09/16 10:51:01 by ayellin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_str_startswith(const char *str, const char *start)
{
	size_t i;

	i = 0;
	while (str[i] && start[i])
	{
		if (str[i] != start[i])
			return (FT_FALSE);
		i++;
	}
	return (FT_TRUE);
}
char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t i;

	i = 0;
	if (needle[0] == '\0')
		return (char*)(haystack);
	while (haystack[i] && i < n)
	{
		if ( i + ft_strlen(needle) <= n && ft_str_startswith(haystack + i, needle))
			return (char*)(haystack + i);
		i++;
	}
	return (FT_NULL);
}

