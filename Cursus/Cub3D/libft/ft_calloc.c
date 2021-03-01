/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldumont <ldumont@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 11:12:12 by ldumont           #+#    #+#             */
/*   Updated: 2020/02/04 10:26:15 by ldumont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t eltsize)
{
	size_t	size;
	void	*value;

	size = count * eltsize;
	value = malloc(size);
	if (value != 0)
		ft_memset(value, 0, size);
	return (value);
}
test
