#include "libft.h"

 char *ft_strrchr(const char *s, int c)
 {
    char    ch;

    ch = (char)c;
    while (*s != ch)
    {
        if (*s == '\0')
            return(0);
        s++;
    }
    return ((char *)s);
 }