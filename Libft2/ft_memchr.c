/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldumont <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 11:15:50 by ldumont           #+#    #+#             */
/*   Updated: 2019/11/28 11:15:52 by ldumont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *block, int c, size_t size)
{
	unsigned char	*b;
	unsigned char	d;

	b = (unsigned char *)block;
	d = (unsigned char)c;
	while (size-- > 0)
	{
		if (*b == d)
			return (b);
		b++;
	}
	return (NULL);
}
