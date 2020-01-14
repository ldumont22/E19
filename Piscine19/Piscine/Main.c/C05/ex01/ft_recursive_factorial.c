/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldumont <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 10:38:00 by ldumont           #+#    #+#             */
/*   Updated: 2019/08/21 08:43:47 by ldumont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_recursive_factorial(int nb)
{
	int e;

	e = 0;
	if (nb < 0)
		return(0);
	if (nb == 0 || nb == 1)
		return (1);
	else
		e = nb *  ft_recursive_factorial(nb - 1);
	return (e);
}

int		main(void)
{
	int nb;

	nb = 15;
	printf("%d", ft_recursive_factorial(nb));
	return (0);
}
