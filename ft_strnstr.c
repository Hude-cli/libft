/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugde-cl <hugde-cl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 18:34:37 by hugde-cl          #+#    #+#             */
/*   Updated: 2022/10/14 18:34:50 by hugde-cl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	count;
	size_t	sizeneedle;

	count = 0;
	sizeneedle = ft_strlen((char *)needle);
	if (*needle == '\0')
		return ((char *)haystack);
	while (haystack[count] != '\0' && count + sizeneedle <= len)
	{
		if (ft_strncmp (&(haystack[count]), needle, sizeneedle) == 0)
		{
			return ((char *)haystack + count);
		}
		count++;
	}
	return (0);
}
