/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldumont <ldumont@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 11:07:18 by ldumont           #+#    #+#             */
/*   Updated: 2020/02/05 18:06:07 by ldumont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	int		compteur;
	char	*str;

	str = (char*)s;
	compteur = 0;
	while (*str != '\0')
	{
		compteur++;
		str++;
	}
	return (compteur);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*dest;

	if (s2 == NULL || s1 == NULL)
		return (NULL);
	if (!(dest = malloc((ft_strlen((char*)s1) +
						ft_strlen((char*)s2)) * sizeof(char*))))
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		dest[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		dest[i + j] = s2[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

char	*ft_strndup(const char *str, const char c)
{
	int			i;
	int			j;
	char		*src;

	i = 0;
	j = 0;
	if (str == NULL)
		return (ft_strndup("", '\0'));
	while (str[j] != c)
		j++;
	if (!(src = malloc((j + 1) * sizeof(*src))))
		return (NULL);
	while (str[i] != '\0' && str[i] != c)
	{
		src[i] = str[i];
		i++;
	}
	src[i] = '\0';
	return (src);
}
char	*ft_strchr(const char *str, int c)
{
	int			i;

	i = 0;
	if (str == NULL)
		return (NULL);
	while (str[i])
	{
		if (str[i] == (unsigned char)c)
			return ((char *)&str[i] + 1);
		i++;
	}
	if (c == 0)
		return ((char *)&str[i] + 1);
	return (NULL);
}
