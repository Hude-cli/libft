#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    char    *str;

    str = (char *)s;
    while (*str != c)
    {
        if(*str == '\0')
        {
            return (NULL);
        }
        str++;
    }
    return(str);
}
// int main() 
// {
//     const char *str = "heea";
//     char  c;
   
//     c = 'h';
//     printf("Found letter:%c\n", *ft_strchr(str, c));
//     //*ft_strchr(str, c);
//     return (0);
// }