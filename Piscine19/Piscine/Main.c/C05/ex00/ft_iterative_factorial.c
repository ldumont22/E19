/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldumont <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 15:53:14 by ldumont           #+#    #+#             */
/*   Updated: 2019/08/21 08:43:03 by ldumont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_factorial(int nb)
{
	int i;
	int depot;

	depot = nb;
	i = 1;
	if (nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	while (i < nb)
	{
		 depot *= (nb - i);
		i++;
	}
	return (depot);
}

int		main(void)
{
	int nb;

	nb = 12;

	printf("%d", ft_iterative_factorial(nb));
	return (0);
}
