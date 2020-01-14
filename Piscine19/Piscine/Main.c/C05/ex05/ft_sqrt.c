/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldumont <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 15:37:10 by ldumont           #+#    #+#             */
/*   Updated: 2019/08/21 09:00:52 by ldumont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_sqrt(int nb)
{
	int i;
	int nbr;

	nbr = nb;
	i = 1;
	while (nbr > i)
	{
		nbr = (nbr + i) / 2;
		i = nb / nbr;
	}
	if (nbr * nbr == nb)
		return (nbr);
	return (0);
}

int		main(void)
{
	int nb;

	nb = 2147483612;
	printf("%d", ft_sqrt(nb));
	return (0);
}
