/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldumont <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 00:16:51 by ldumont           #+#    #+#             */
/*   Updated: 2019/08/18 00:42:50 by ldumont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_str_is_lowercase(char *str)
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
		if ('a' <= str[i] && str[i] <= 'z')
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
	char str[] = "dgsdgss";

	printf("%d", ft_str_is_lowercase(str));
	return (0);
}
