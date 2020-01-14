/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldumont <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 21:41:37 by ldumont           #+#    #+#             */
/*   Updated: 2019/08/18 10:09:16 by ldumont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j] && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int		main(void)
{
	char dest[16] = "ceciestun";
	char src[] = "testeeee";
	unsigned int nb = 4;

	printf("%s\n", strncat(dest, src, nb));
	//printf("%s\n", ft_strncat(dest, src, nb));
	printf("%s", dest);
	return (0);
}
