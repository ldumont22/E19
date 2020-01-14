/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldumont <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 21:00:03 by ldumont           #+#    #+#             */
/*   Updated: 2019/08/13 10:27:35 by ldumont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int		ft_strlen(char *str)
{
	int compteur;

	compteur = 0;
	while (*str != '\0')
	{
		compteur++;
		str++;
	}
	return compteur;
}

int		main(void)
{
	char *str;

	str = "yes";
	ft_strlen(str);
	printf("%d", ft_strlen(str));
	return (0);
}
