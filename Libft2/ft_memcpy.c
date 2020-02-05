/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldumont <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 11:16:48 by ldumont           #+#    #+#             */
/*   Updated: 2019/11/28 11:16:49 by ldumont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *desc, const void *src, size_t size)
{
	unsigned char *i;
	unsigned char *j;

	i = (unsigned char *)desc;
	j = (unsigned char *)src;
	if ((desc == NULL) && (src == NULL))
		return (NULL);
	while (size-- > 0)
	{
		*i = *j;
		i++;
		j++;
	}
	return (desc);
}
