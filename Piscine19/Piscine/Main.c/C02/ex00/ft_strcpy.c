/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldumont <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 15:01:08 by ldumont           #+#    #+#             */
/*   Updated: 2019/08/19 17:39:15 by ldumont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}


int		main(void)
{
	char src[] = "Bonjour";
	char dest[] = "paplace";

	//ft_strcpy(dest, src);
	//printf("%s", strcpy(dest, src));
	printf("%s", ft_strcpy(dest, src));
	return (0);
}
