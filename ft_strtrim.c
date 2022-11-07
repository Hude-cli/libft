/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugde-cl <hugde-cl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 18:35:58 by hugde-cl          #+#    #+#             */
/*   Updated: 2022/10/20 14:14:19 by hugde-cl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_checkset(char c, char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*word;
	int		start;
	int		end;
	size_t	i;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[i] && ft_checkset(s1[i], (char *)set))
		i++;
	start = i;
	if (s1[i])
	{
		while (s1[i])
			i++;
		while (ft_checkset(s1[i - 1], (char *)set))
			i--;
	}
	end = ft_strlen(s1) - i;
	word = malloc(sizeof(char) * (ft_strlen(s1) - start - end + 1));
	if (!word)
		return (NULL);
	ft_strlcpy(word, s1 + start, ft_strlen(s1) - end - start + 1);
	return (word);
}
