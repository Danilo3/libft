//
// Created by dan on 13.09.19.
//

#include "libft.h"
#include <stdlib.h>

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
