/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldumont <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 13:46:17 by ldumont           #+#    #+#             */
/*   Updated: 2019/08/21 08:52:27 by ldumont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else 
		return(ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
}

int		main(void)
{
	int index;

	index = 89;
	printf("%d", ft_fibonacci(index));
	return (0);
}
