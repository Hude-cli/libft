/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugde-cl <hugde-cl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 18:22:11 by hugde-cl          #+#    #+#             */
/*   Updated: 2022/10/17 15:14:45 by hugde-cl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*d;
	const char	*s;
	int			i;

	d = (char *)dst;
	s = (const char *)src;
	i = len - 1;
	if (!dst && !src)
	{
		return (NULL);
	}
	if (d > s)
	{
		while (i >= 0)
		{
			d[i] = s[i];
			i--;
		}
	}
	else
		ft_memcpy (dst, src, len);
	return (dst);
}
// #include <string.h>
// #include <stdio.h>

// int main()
// {
//     char *a = "abcddd";
//     char *b = "hugo";
//     printf("%s\n", ft_memmove(a, b, 3));

//     char *a1 = "abcddd";
//     char *b1 = "hugo";
//     printf("\n%s", memmove(a1, b1, 3));
// }