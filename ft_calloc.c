#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
    void    *str;

    str = malloc(size * count);
    if (!str)
        return(0);
    ft_bzero(str, size * count);    
    return(str);
}

// int main()
// {
//     void *str;

//     str = ft_calloc('5', '3');
//     str = malloc(17);
//     return((int)&str);
// }
