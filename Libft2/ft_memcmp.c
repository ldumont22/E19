/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldumont <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 11:16:18 by ldumont           #+#    #+#             */
/*   Updated: 2019/11/28 11:16:40 by ldumont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *a1, const void *a2, size_t size)
{
	const unsigned char	*s1;
	const unsigned char	*s2;
	size_t				i;

	if (a1 == a2 || size == 0)
		return (0);
	s1 = (const unsigned char *)a1;
	s2 = (const unsigned char *)a2;
	i = 0;
	while (i < size)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
