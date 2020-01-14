/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldumont <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 13:38:44 by ldumont           #+#    #+#             */
/*   Updated: 2019/08/19 17:53:29 by ldumont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i + 1);
}

int		main(void)
{
	char str[] = "d";

	printf("%d\n", ft_strlen(str));
	printf("%lu", sizeof(str));
	printf("%lu", strlen(str));
}
