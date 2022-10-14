#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    size_t  i;
    unsigned char *src;
    unsigned char dst;

    i = 0;
    src = (unsigned char *)s;
    dst = (unsigned char)c;
    while (n > i)
    {
        if(src[i] == dst)
            return(&src[i]);
        i++;
    }
    return (0);
}
// int main()
// {
//     int c = '9';
//     char *b = "a9";
//     printf("%s\n", ft_memchr(b, c, 1));
//     int c1 = '9';
//     char *b1 = "a9";
//     printf("%s\n", memchr(b1, c1, 2));
// }