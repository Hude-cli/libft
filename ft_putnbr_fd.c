/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugde-cl <hugde-cl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 18:27:28 by hugde-cl          #+#    #+#             */
/*   Updated: 2022/10/14 18:27:40 by hugde-cl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putstr_fd ("-2147483648", fd);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd ('-', fd);
		n *= -1;
	}
	if (n >= 10)
	{
		ft_putnbr_fd (n / 10, fd);
		n = n % 10;
	}
	if (n < 10)
	{
		ft_putchar_fd (n + 48, fd);
	}
}
