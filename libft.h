/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayellin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 13:46:58 by ayellin           #+#    #+#             */
/*   Updated: 2019/09/12 16:23:09 by ayellin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <string.h>

#define FT_INT_MIN (-2147483647 -1)

#define FT_INT_MAX (2147483647)

typedef unsigned char t_uchar;

/*
 ** Part1:
 */
size_t	ft_strlen(const char *str);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void *	ft_memcpy(void *dst, const void *src, size_t n);
void *	ft_memset(void *b, int c, size_t len);


/*
 ** My:
 */
char *ft_strrev(char *str);

/*
 * Expansion
 */
void ft_itostr(int value, char *str);



#endif
