/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strloxcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldumont <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 15:48:46 by ldumont           #+#    #+#             */
/*   Updated: 2019/08/18 01:15:08 by ldumont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strloxcase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

int		main(void)
{
	char str[] = "TEST";

	printf("%s", ft_strloxcase(str));
	ft_strloxcase(str);
	return (0);
}
