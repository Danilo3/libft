/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstartswith.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayellin <ayellin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 04:40:18 by ayellin           #+#    #+#             */
/*   Updated: 2019/09/14 04:40:18 by ayellin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strnstartswith(const char *str, const char *begin, size_t n)
{
	size_t i;

	i = 0;
	while (str[i] && i < n)
	{
		if (str[i] != begin[i])
			return (0);
		i++;
	}
	return (1);
}