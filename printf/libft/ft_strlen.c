/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldumont <ldumont@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 09:14:32 by ldumont           #+#    #+#             */
/*   Updated: 2019/11/28 14:15:49 by ldumont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
