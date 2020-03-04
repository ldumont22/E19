/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldumont <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 16:02:13 by ldumont           #+#    #+#             */
/*   Updated: 2019/11/28 14:14:55 by ldumont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		size;
	int		a;
	int		b;
	char	*str;

	a = 0;
	b = 0;
	if (s1 == 0 || s2 == 0)
		return (0);
	size = ft_strlen((char*)s1) + ft_strlen((char*)s2);
	str = malloc((size + 1) * sizeof(*str));
	if (str == NULL)
		return (NULL);
	while (s1[a] != '\0')
	{
		str[a] = s1[a];
		a++;
	}
	while (s2[b] != '\0')
	{
		str[a + b] = s2[b];
		b++;
	}
	str[a + b] = '\0';
	return (str);
}
