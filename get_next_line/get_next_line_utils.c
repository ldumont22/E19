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
	int		size;
	int		a;
	int		b;
	char	*str;

	a = 0;
	b = 0;
	if (s1 == 0 || s2 == 0)
		return (0);
	size = ft_strlen((char*)s1) + ft_strlen((char*)s2);
	if (!(str = (char*)malloc((size + 1) * sizeof(*str))))
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

char	*ft_strdup(const char *s, const char c)
{
	char	*src;
	int		i;
	int		size;

	size = 0;
	while (s[size] != c)
		size++;
	if (!(src = malloc(sizeof(*src) * (size + 1))))
		return (NULL);
	i = 0;
	while (s[i] != '\0' && s[i] != c)
	{
		src[i] = s[i];
		i++;
	}
	src[i] = '\0';
	return (src);
}

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *)s + ft_strlen(s);
	while (*str != c)
	{
		if (str == s)
		{
			return (0);
		}
		str--;
	}
	return (str);
}
