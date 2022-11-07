/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugde-cl <hugde-cl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 18:14:02 by hugde-cl          #+#    #+#             */
/*   Updated: 2022/10/25 17:44:21 by hugde-cl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_checklen(int n)
{
	int	len;

	if (n == 0)
		return (1);
	len = 0;
	if (n < 0)
		len++;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*res;
	char	modulo;

	if (n == 0)
		return (ft_strdup("0"));
	len = ft_checklen(n);
	res = malloc(sizeof(char) * (len + 1));
	if (res == NULL)
		return (NULL);
	if (n < 0)
		res[0] = '-';
	res[len] = '\0';
	while (n != 0)
	{
		len--;
		modulo = n % 10;
		if (n < 0)
			modulo *= -1;
		res[len] = modulo + '0';
		n /= 10;
	}
	return (res);
}
