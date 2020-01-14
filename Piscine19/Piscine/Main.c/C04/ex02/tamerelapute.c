/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldumont <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 15:17:44 by ldumont           #+#    #+#             */
/*   Updated: 2019/08/18 15:55:36 by ldumont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, &"-2147483648", 11);
	}
	
	if (nb < 0 && nb > -2147483648)
	{
		ft_putchar ('-');
		ft_putnbr (nb * (-1));
	}
	else if (nb >= 0 && nb <= 9)
	{
		ft_putchar(nb + '0');
	}
	else if (nb > 9 && nb <= 2147483647)
	{
		ft_putnbr(nb /10);
		ft_putnbr(nb % 10);
	}
}

int main (void)
{
	int nb = 42;

	ft_putnbr(nb);
	return(0);
}
