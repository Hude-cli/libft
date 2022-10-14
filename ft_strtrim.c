#include "libft.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

static	int     ft_checkset(char c, char const *set)
{
	int i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return(1);
		i++;
	}
	return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
	char    *word;
	size_t	start;
	size_t	end;
	size_t  i;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_checkset(s1[start], set))
		start++;
	end = ft_strlen((char *)s1);
	while (end > start && ft_checkset(s1[end - 1], set))
		end--;
	word = malloc(sizeof(s1) * ((end - start)) + 1);
	if (!word)
		return (NULL);
	i = 0;
	while (start < end)
		word[i++] = s1[start++];
	word[i] = 0;
	return (word);
}

// int main()
// {
//     char const str1[] = "bonjourbon";
//     char const str2[] = "bon";

//     printf("%s\n", ft_strtrim(str1, str2));

//     return (0);
// }