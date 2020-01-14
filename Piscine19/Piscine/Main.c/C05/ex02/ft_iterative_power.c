/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldumont <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 11:25:20 by ldumont           #+#    #+#             */
/*   Updated: 2019/08/21 08:46:16 by ldumont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_power(int nb, int power)
{
	int evrard;

	evrard = nb;
	if (nb == 0 || power ==  0)
		return (1);
	if (power < 0)
		return (0);
	while (power > 0)
	{
		nb = nb * evrard;
		power--;
	}
	return (nb);
}

int		main(void)
{
	int nb;
	int power;

	nb = 8;
	power = 8;
	printf("%d", ft_iterative_power(nb, power));
	return (0);
}
