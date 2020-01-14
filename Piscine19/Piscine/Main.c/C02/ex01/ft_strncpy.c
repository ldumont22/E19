/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldumont <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 17:40:31 by ldumont           #+#    #+#             */
/*   Updated: 2019/08/18 00:36:15 by ldumont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

int		main(void)
{
	char src[] = "Maisouiiiiiiiii";
	char dest[20] = "";
	unsigned int n = 5;

	printf("%s", ft_strncpy(dest, src, n));
	//printf("%s", strncpy(dest, src, n));

}
