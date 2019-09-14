/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dan <dan@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 14:20:47 by dan               #+#    #+#             */
/*   Updated: 2019/09/14 14:42:54 by dan              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *new;
	size_t s1_len;
	size_t s2_len;

	if (!s1 || !s2)
		return (FT_NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	new = ft_strnew(s1_len + s2_len + 1);
	if (!new)
		return (FT_NULL);
	ft_strncpy(new, s1, s1_len);
	ft_strncat(new, s2, s2_len);
	return (new);
}
