#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t  i;

    i = 0;
    while (i < n)
    {
        if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
                return(((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
        i++;
    }
    return(0);
}
// int main()
// {
//     char *s1 = "hugo";
//     char *s2 = "hugo";
//     printf("%d\n", ft_memcmp(s1, s2, 10));
//     char *s11 = " ";
//     char *s22 = "";
//     printf("%d\n", memcmp(s11, s22, 2));
// }