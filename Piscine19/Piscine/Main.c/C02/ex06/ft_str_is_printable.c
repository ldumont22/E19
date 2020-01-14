/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldumont <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 00:02:28 by ldumont           #+#    #+#             */
/*   Updated: 2019/08/18 01:12:49 by ldumont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_str_is_printable(char *str)
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
		if (32 <= str[i] && str[i] <= 127)
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

	printf("%d", ft_str_is_printable(str));
	return (0);
}
