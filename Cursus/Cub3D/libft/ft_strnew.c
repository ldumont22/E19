/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldumont <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 11:34:44 by ldumont           #+#    #+#             */
/*   Updated: 2019/11/28 14:19:48 by ldumont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *res;

	if (!(res = (char *)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	return (ft_memset(res, '\0', size + 1));
}
