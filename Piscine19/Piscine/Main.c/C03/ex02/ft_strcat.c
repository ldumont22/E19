/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldumont <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 21:14:21 by ldumont           #+#    #+#             */
/*   Updated: 2019/08/18 11:10:26 by ldumont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}

int		main(void)
{
	char dest[20] = "ceciest";
	char src[] = "untest";

	//printf("%s\n", ft_strcat(dest, src));
	//printf("%c\n", dest[15]);
	//printf("%s\n", strcat(dest, src));
	//printf("%c", *dest);
	return (0);
}
