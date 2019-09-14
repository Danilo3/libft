/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayellin <ayellin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 22:03:48 by ayellin           #+#    #+#             */
/*   Updated: 2019/09/14 22:03:51 by ayellin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char ft_iswhitespace(char ch)
{
	return (ch == '\t' || ch == '\n' || ch == ' ');
}

char	*ft_strtrim(char const *s)
{
	char *trimmed_str;
	size_t len;
	size_t i;
	size_t j;

	i = 0;
	len = ft_strlen(s);
	j = len - 1;
	while (ft_iswhitespace(s[i]))
		i++;
	while(ft_iswhitespace(s[j]))
		j--;
	len -= (len - j) + i;
	trimmed_str = (char *)malloc(sizeof(char) * len + 1);
	if (!trimmed_str)
		return (NULL);
	ft_strncpy(trimmed_str, s + i, len);
	return (trimmed_str);
}