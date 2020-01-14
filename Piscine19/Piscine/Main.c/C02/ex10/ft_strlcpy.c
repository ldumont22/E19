/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldumont <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 01:21:25 by ldumont           #+#    #+#             */
/*   Updated: 2019/08/18 01:24:43 by ldumont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	while (src[i] != '\0')
		i++;
	if (size == 0)
		return (i);
	while (j + 1 < size && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';
	j = 0;
	while (src[j] != '\0')
		j++;
	return (i);
}

int		main(void)
{
	char dest[8] = "niquez-";
	char src[] = "pouireodfu";
	unsigned int size = 5;

	printf("%lu\n", strlcpy(dest, src, size));
	//printf("%u\n", ft_strlcpy(dest, src, size));
	printf("%s\n", dest);
	return (0);
}
