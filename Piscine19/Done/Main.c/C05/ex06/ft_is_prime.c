/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldumont <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 16:25:36 by ldumont           #+#    #+#             */
/*   Updated: 2019/08/22 15:35:56 by ldumont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_is_prime(int nb)
{
	long i;

	i = 2;
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int		main(void)
{
	int nb;

	nb = -11;
	printf("%d", ft_is_prime(nb));
	return (0);
}
