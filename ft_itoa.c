/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dan <dan@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 15:39:47 by dan               #+#    #+#             */
/*   Updated: 2019/09/14 15:39:47 by dan              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int size;
	char *number;

	size = ft_count_digits(n);
	if (n < 0)
		size++;
	number = ft_strnew(size);
	if(!number)
		return (FT_NULL);
	ft_itostr(n, number);
	return (number);

}

