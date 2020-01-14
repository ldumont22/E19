/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldumont <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 14:55:24 by ldumont           #+#    #+#             */
/*   Updated: 2019/08/18 01:14:22 by ldumont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

int		main(void)
{
	char str[] = "ceciestuPntest";

	printf("%s", ft_strupcase(str));
	ft_strupcase(str);
	return (0);
}
