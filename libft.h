/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayellin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 13:46:58 by ayellin           #+#    #+#             */
/*   Updated: 2019/09/14 01:23:06 by ayellin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <string.h>

#define FT_INT_MIN (-2147483647 -1)
#define FT_INT_MAX (2147483647)
#define FT_CHAR_MAX 128
#define FT_NULL ((void*)0)


typedef unsigned char t_uchar;

/*
 ** Part1:
 */
size_t	ft_strlen(const char *str);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t len);
int		ft_atoi(const char *str);
int		ft_isdigit(int c);
int 	ft_isalpha(int c);
int		ft_isalnum(int c);
int 	ft_isascii(int c);
int		is_print(int c);
int		ft_tolower(int c);
int		ft_toupper(int c);
char	*ft_strcpy(char *dest, const char *str);
char 	*ft_strdup(const char *str);
char	*ft_strncpy(char *det, const char *src, size_t len);
/*
 ** Part 2
 */
void	ft_putchar_fd(char c, int fd);

/*
 **	Bonus
 */
typedef struct	s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}				t_list;


t_list	*ft_lstnew(void const *content, size_t content_size);


/*
 ** My
 */
char	*ft_strrev(char *str);
int		ft_isspace(char ch);
int		ft_islower(int c);
int		ft_isupper(int c);

/*
 * Expansion
 */
void	ft_itostr(int value, char *str);
void	ft_realloc(void *ptr, size_t size);
void	ft_memjoin(void *s1, void *s2, size_t n1, size_t n2);
void	*ft_memrcpy(void *dst, const void *src, size_t len);

#endif
