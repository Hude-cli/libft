/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugde-cl <hugde-cl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 18:18:52 by hugde-cl          #+#    #+#             */
/*   Updated: 2022/10/14 18:19:38 by hugde-cl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*src;
	unsigned char	dst;

	i = 0;
	src = (unsigned char *)s;
	dst = (unsigned char)c;
	while (n > i)
	{
		if (src[i] == dst)
			return (&src[i]);
		i++;
	}
	return (0);
}
