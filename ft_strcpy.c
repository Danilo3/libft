/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayellin <ayellin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 01:19:46 by ayellin           #+#    #+#             */
/*   Updated: 2019/09/14 01:24:29 by ayellin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strcpy(char *dest, const char *src)
{
	char *copy;

	copy = dest;
	while(*src)
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (copy);
}
