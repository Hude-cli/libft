#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
    size_t i;

    unsigned char *dst1;
    const unsigned char *src1;
    
    i = 0;
    dst1 =  (unsigned char *)dst;
    src1 =  (unsigned char *)src;
    if (!dst1 && !src1)
        return(NULL);
    if (src1 > dst1)
        while(i < len)
        {
            dst1[i] = src1[i];
            i++;
        }
    else
    {
        while (i != len)
        {
            dst1[len - i - 1] = src1[len - i - 1];
            i++;
        }
    }
    return(dst);
}
// int main()
// {
//     char *a = "abc";
//     char *b = "hugo";
//     printf("%s\n", ft_memmove(a, b, 3));

//     char *a1 = "abcddd";
//     char *b1 = "hugo";
//     printf("\n%s", memmove(a1, b1, 3));
// }