#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t len)
{
size_t i;

unsigned char    *src1;

src1 = (unsigned char *)src;
i = 0;
if (len > 0)
    {
        while (src1[i] && i < len - 1)
        {
            dst[i] = src1[i];
            i++;
        }
        dst[i] = 0;
    }
    while (src[i])
        i++;
    return(i);
}

// int main(void)
// {
// 	const char src1[10]	= "ab121";
// 	char dest1[10]   = "12123123";

// 	char src[10]	= "ab121";
// 	char dest[10]	= "12123123";

// 	size_t 			nb = 8;
// 	unsigned int 	nb2 = 8;
// 	//strcat(src, dest);
// 	printf("Str: %ld \n", strlcpy(dest1, src1, nb));
// 	printf("Str: %zu", ft_strlcpy(dest, src, nb2));
// 	return (0);
// }
// int main()
// {
//     char a[10] = "abcdef";
//     char b[10] = "hugo$$$$$";
//     printf("%zu\n",ft_strlcpy(a, b, 10));

//     char a1[10] = "abcdef";
//     char b1[10] = "hugo";
//     printf("\n%zu",ft_strlcpy(a1, b1, 10));
// }