/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugde-cl <hugde-cl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 17:44:26 by hugde-cl          #+#    #+#             */
/*   Updated: 2022/10/14 17:44:29 by hugde-cl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	overflow(long nb)
{
	if (nb == -1)
		return (0);
	return (-1);
}

int ft_atoi(const char *str)
{
    int     res;
    long    long    sign;
    int     i;

    res = 0;
    sign = 1;
    i = 0;
    while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign *= -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        res = res * 10 + str[i] - '0';
        i++;
    }
    if (res < 0)
        overflow(sign);
    return (res * sign);
}

// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int mine;
//     int theirs;
//     char *a = "-9223372036854775807";
//     mine = ft_atoi(a);
//     theirs = atoi(a);
//     printf("mine: %d | theirs: %d\n", mine, theirs);
//     return(0);
// }