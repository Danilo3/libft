/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayellin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 13:46:58 by ayellin           #+#    #+#             */
/*   Updated: 2019/09/14 20:09:52 by ayellin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <string.h>

#define FT_INT_MIN (-2147483647 -1)
#define FT_INT_MAX (2147483647)
#define FT_CHAR_MAX 128
#define FT_NULL ((void*)0)

#define MIN(x, y) ((x) < (y) ? (x) : (y))
#define MAX(x, y) ((x) > (y) ? (x) : (y))

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
char 	*ft_strcat(char *s1, char *s2);
char	*ft_strncat(char *s1, char *s2, size_t n);
size_t	ft_strlcat(char *s1, const char *s2, size_t size);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char 	*ft_strstr(const char *haystack, const char *needle);
char 	*ft_strnstr(const char *haystack, const char *needle, size_t len);

/*
 ** Part 2
 */
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char const *s, int fd);
void	ft_putendl_fd(char const *s, int fd);
void	ft_putendl(char const *s);
void	ft_putchar(char c);
void	ft_putstr(char const *s);
void	*ft_memalloc(size_t size);
void	ft_memdel(void **ap);
char 	*ft_strnew(size_t size);
void	ft_strdel(char **as);
void	ft_strclr(char *s);
void	ft_striter(char *s, void (*f)(char *));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
char 	*ft_strmap(char const *s, char (*f)(char));
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int		ft_strequ(char const *s1, char const *s2);
int		ft_strnequ(char const *s1, char const *s2, size_t n);
char	*ft_strsub(char const *s, unsigned int start, size_t len);
char 	*ft_strjoin(char const *s1, char const *s2);
char 	*ft_itoa(int n);
void	ft_putnbr_fd(int n, int fd);

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
void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void	ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void	ft_lstadd(t_list **alst, t_list *new);
void	ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));

/*
 ** My
 */
char	*ft_strrev(char *str);
int		ft_isspace(char ch);
int		ft_islower(int c);
int		ft_isupper(int c);
int 	ft_strstartswtih(const char *str, const char *begin);
int		ft_strnstartswith(const char *str, const char *begin, size_t n);
int		ft_count_digits(int n);
size_t	ft_lstlen(t_list *lst);
/*
 * Expansion
 */
void	ft_itostr(int value, char *str);
void	ft_realloc(void *ptr, size_t size);
void	ft_memjoin(void *s1, void *s2, size_t n1, size_t n2);
void	*ft_memrcpy(void *dst, const void *src, size_t len);
double	ft_power(double base, int n);

#endif
