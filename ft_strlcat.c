/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugde-cl <hugde-cl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 18:31:01 by hugde-cl          #+#    #+#             */
/*   Updated: 2022/10/14 19:38:48 by hugde-cl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (len == 0)
		return (ft_strlen(src));
	while (dst[i] != '\0' && i < len)
		i++;
	j = i;
	while (src[i - j] != '\0' && i < len - 1)
	{
		dst[i] = src[i - j];
		i++;
	}
	if (j < len)
		dst[i] = '\0';
	return (j + ft_strlen(src));
}
