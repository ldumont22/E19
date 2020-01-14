/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldumont <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 23:26:58 by ldumont           #+#    #+#             */
/*   Updated: 2019/08/18 00:44:22 by ldumont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_str_is_uppercase(char *str)
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
		if ('A' <= str[i] && str[i] <= 'Z')
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

	printf("%d", ft_str_is_uppercase(str));
	return (0);
}
