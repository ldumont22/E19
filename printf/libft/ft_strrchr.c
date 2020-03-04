/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldumont <ldumont@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 11:17:45 by ldumont           #+#    #+#             */
/*   Updated: 2019/11/28 14:24:09 by ldumont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *str;

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
