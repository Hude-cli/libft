#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
    char *str;
    
    str = b;
    while(len)
    {
        *str = (unsigned char)c;
        str++;
        len--;
    }
    return(b);
}
// int main()
// {
//     char a[50];
//     printf("%s\n",ft_memset(a, 's', 5)); 
// }