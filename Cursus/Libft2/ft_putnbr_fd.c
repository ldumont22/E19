/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldumont <ldumont@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 16:26:33 by ldumont           #+#    #+#             */
/*   Updated: 2019/11/28 14:10:45 by ldumont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	putchar(char a, int fd)
{
	write(fd, &a, 1);
}

void	putint(int x, int fd)
{
	char a;

	a = x + 48;
	write(fd, &a, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		putchar(45, fd);
		n *= -1;
	}
	if (n >= 0 && n < 10)
		putint(n, fd);
	if (n >= 10)
	{
		if ((n / 10) >= 1)
			ft_putnbr_fd((n / 10), fd);
		putint((n % 10), fd);
	}
}
