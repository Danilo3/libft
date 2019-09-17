/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strmap.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayellin <ayellin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 20:05:00 by ayellin           #+#    #+#             */
/*   Updated: 2019/09/17 20:05:00 by ayellin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
#include <stdlib.h>
/* possible realization
char    *ft_strmap(char const *s, char (*f)(char))
{
    char    *fresh;
    size_t i;

    i = 0;
    fresh = (char*)malloc(ft_strlen(s));
    if (!fresh)
        return (NULL);
    while (*s)
    {
        fresh[i++] = f(*s);
        s++;
    }
    return (fresh);
}
*/