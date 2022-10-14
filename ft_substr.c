#include "libft.h"
// #include <stdio.h>
// #include <stdlib.h>
// #include <unistd.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
        char        *result;

    if (start > (unsigned int)ft_strlen((char *)s))
            return (ft_strdup(""));
    if ((size_t)ft_strlen((char *)s + start) < len)
            len = ft_strlen((char *)s + start);
    result = malloc (sizeof(char) * (len + 1));
    if (result == NULL)
            return (NULL);
    ft_strlcpy(result, s + start, len + 1);
    return (result);
}
// {
//         if (s == NULL)
//                 return (NULL);
//         if ((unsigned int)ft_strlen((char *) s) < start)
// 	        return (ft_calloc(1, sizeof(char)));
//         new_len = ft_strlen((char *) s) - start;
//         if (new_len < len)
// 	        len = new_len;
//         str = malloc(sizeof(char) * (len + 1));
//         if (!str)
// 	        return (NULL);
//         ft_strlcpy(str, s + start, len +1);
//         return (str);
// }
// int main()
// {
// 	char const *str;

// 	str = ft_substr("Hello, 19hugo!", 6, 5);
// 	printf("%s\n", str);

// 	return 0;
// }