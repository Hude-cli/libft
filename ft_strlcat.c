#include "libft.h"


size_t ft_strlcat(char *dst, const char *src, size_t len)
{
    size_t i;
    size_t dst_len;
    size_t src_len;

    i = 0;
    dst_len = ft_strlen(dst);
    src_len = ft_strlen((char *)src);
    if (!len)
        return (src_len);
    while (src[i] && dst_len + i < len - 1)
    {
        dst[dst_len + i] = src[i];
        i++;
    }
    dst[dst_len +i] = '\0';
    if (dst_len > len)
        return(src_len + len);
    return(src_len + dst_len);
}

// int main(void)
// {
// 	const char src1[10]	= "ab";
// 	char dest1[10]   = "123";

// 	char src[10]	= "ab";
// 	char dest[10]	= "123";

// 	size_t 			nb = 2;
// 	unsigned int 	nb2 = 2;
// 	//strcat(src, dest);
// 	printf("Str: %ld \n", strlcat(dest1, src1, nb));
// 	printf("Str: %u", ft_strlcat(dest, src, nb2));
// 	return (0);
// }