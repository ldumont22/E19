/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldumont <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 16:24:17 by ldumont           #+#    #+#             */
/*   Updated: 2019/08/17 23:58:06 by ldumont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;
	unsigned int compteur;

	i = 0;
	j = 0;
	compteur = 0;
	while (dest[i] != '\0' && i < size)
		i++;
	compteur += i;
	while (src[j])
		j++;
	compteur += j;
	if (i == size)
		return (compteur);
	j = 0;
	while (src[j] && i + j < size - 1) // -1 pour laisser une place au '\0'
		{
			dest[i + j] = src[j];
			j++;
		}
	dest[i + j] = '\0';
	//printf("%s", dest);
	return (compteur);
}

int		main(void)
{
	char dest[10] = "djgaj";
	char src[] = "";
	unsigned int size = 0;

	//printf("%lu\n", strlcat(dest, src, size));
	printf("%u\n", ft_strlcat(dest, src, size));
	//printf("%s\n", dest);
	return (0);

}
