/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldumont <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 11:15:26 by ldumont           #+#    #+#             */
/*   Updated: 2019/11/28 11:15:35 by ldumont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *desc, const void *src, int c, size_t size)
{
	unsigned char *d;
	unsigned char *s;

	d = (unsigned char *)desc;
	s = (unsigned char *)src;
	while (size-- > 0)
	{
		*d = *s;
		if (*s == (unsigned char)c)
			return (d + 1);
		d++;
		s++;
	}
	return (NULL);
}
