/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_alloc_sqmt.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayellin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 15:33:01 by ayellin           #+#    #+#             */
/*   Updated: 2019/10/11 17:02:21 by ayellin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_alloc_sqmt(size_t n)
{
	char	**mtx;
	size_t	i;

	i = 0;
	mtx = (char**)ft_memalloc(sizeof(char*) * (n + 1));
	if (!mtx)
		return (NULL);
	while (i < n)
	{
		mtx[i] = (char*)ft_memalloc(sizeof(char) * (n + 1));
		if (!mtx[i])
		{
			ft_free_sqmt(mtx);
			return (NULL);
		}
		i++;
	}
	mtx[i] = NULL;
	return (mtx);
}
