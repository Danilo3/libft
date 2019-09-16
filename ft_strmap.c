/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dan <dan@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 13:33:56 by dan               #+#    #+#             */
/*   Updated: 2019/09/16 10:57:27 by ayellin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*new;
	size_t  i;

	i = 0;
	if (!s || !f)
		return (FT_NULL);
	new = ft_strnew(ft_strlen(s));
	if (!new)
		return (NULL);
	while(s[i])
	{
		new[i] = f(s[i]);
		i++;
	}
	return (new);
}