#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;

    i = 0;
    while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
    {
        if (s1[i] < s2[i])
            return(-1);
        else if (s1[i] > s2[i])
            return(1);
        i++;
    }
    return(0);
}
// int main() 
// {
//     char str1[] = "aaaaaa";
//     char str2[] = "aaaaa";
//     printf("%d\n", ft_strncmp(str1, str2, 6));
//     char str12[] = "aaa";
//     char str21[] = "bbbb";
//     printf("%d\n", strncmp(str12, str21, 4));
// }