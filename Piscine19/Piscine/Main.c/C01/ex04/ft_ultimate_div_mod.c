/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldumont <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 14:48:54 by ldumont           #+#    #+#             */
/*   Updated: 2019/08/12 20:08:24 by ldumont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
 
void	ft_ultimate_div_mod(int *a, int *b)
{
	int c;

	c = (*a / *b);
	*a = c;
	*b = (*a % *b);
}

int		main(void)
{
	int a = 42;
	int b = 3;
	ft_ultimate_div_mod(&a, &b);
	printf("%d", a);
	return (0);
}
