#include "libft.h"
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	// unsigned char *d;
	// const   unsigned char *s;

	// d = dst;
	// s = src;
	size_t i;

	if(!dst && !src)
		return(0);
	i = 0;
	while(i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return(dst);
}
// int main()
// {
//     char *dst = "abc";
//     char *src = "hugo";
//     printf("%s\n", ft_memcpy(dst, src, 8));

//     char *dst1 = "abc";
//     char *src1 = "hugo";
//     printf("\n%s", memcpy(dst1, src1, 1));
// }