#include "libft.h"
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

char    *ft_strdup(const char *s1)
{
    int         i;
    char    *str;

    i = 0;
    str = (char *)s1;
    str = malloc(sizeof(*str) * ft_strlen((char *) s1) + 1);
    if (!str)
        return (NULL);
    while (str[i])
    {
        str[i] = s1[i];
        i++;
    }
    str[i] = '\0';
    return (str);
}

// int main()
// {
//     char *src = "hugo";
//     char *mine = NULL;
//     char *theirs = NULL;

//     mine = ft_strdup(src);
//     theirs = strdup(src);
//     printf(":%s:\n:%s:\n", mine, theirs);
//     return(0);
// }
