/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dan <dan@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 13:41:26 by dan               #+#    #+#             */
/*   Updated: 2019/09/14 13:41:55 by dan              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new;
	size_t  i;

	i = 0;
	new = ft_strnew(ft_strlen(s));
	if (!new)
		return (NULL);
	while(s[i])
	{
		new[i] = f(i, s[i]);
		i++;
	}
	return (new);
}
