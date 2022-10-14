#include "libft.h"

int ft_isprint(int  c)
{
    if(c >= 32 && c <= 127)
        return(1);
    return(0);
}
// int main()
// {
//     char a = '7';
//     printf("%d\n", ft_isascii(a));
// }