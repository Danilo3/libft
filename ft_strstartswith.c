/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstartswith.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayellin <ayellin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 04:43:34 by ayellin           #+#    #+#             */
/*   Updated: 2019/09/14 04:43:34 by ayellin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strstartswith(const char *str, const char *begin)
{
	size_t i;

	i = 0;
	while (str[i])
	{
		if (str[i] != begin[i])
			return (0);
		i++;
	}
	return (1);
}
