/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldumont <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 10:37:36 by ldumont           #+#    #+#             */
/*   Updated: 2019/08/18 00:40:23 by ldumont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_str_is_numeric(char *str)
{
	int i;
	int compteur;

	i = 0;
	compteur = 0;
	if (str[1] == '\0')
	{
		return (1);
	}
	while (str[i])
	{
		if ('0' <= str[i] && str[i] <= '9')
		{
			compteur++;
		}
		i++;
	}
	if (compteur == i)
		return (1);
	return (0);
}

int		main(void)
{
	char str[] = "";

	printf("%d", ft_str_is_numeric(str));
	return (0);
}
