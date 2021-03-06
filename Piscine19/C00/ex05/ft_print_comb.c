/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldumont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 20:44:11 by ldumont          #+#    #+#             */
/*   Updated: 2019/08/09 20:44:11 by ldumont        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char tab[6] = { '0', '1', '2', ',', ' ', '7'};

		while(tab[0] <= '7')
		{
			while(tab[1] <= '8')
			{
				while(tab[2] <= '9')
				{
					write(1, &tab[0 & 1 & 2 & 3 & 4], 5);
					tab[2]++;
				}
			tab[2] = tab[1] + 2;
			tab[1]++;
			}
		tab[1] = tab[0] + 2;
		tab[0]++;
		};
	write(1, &tab[5], 1);
	write(1, &tab[1 & 2], 2);
}

int		main(void)
{
	ft_print_comb();
	return(0);
}
