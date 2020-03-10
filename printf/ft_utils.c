/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldumont <ldumont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 15:10:15 by ldumont           #+#    #+#             */
/*   Updated: 2020/03/10 15:32:42 by ldumont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void	ft_putstr(char *str, t_flags *flags)
{
	while (*str != '\0')
	{
		ft_putchar(*str, flags;
		str++;
	}
}

void	ft_putchar(char c, t_flags *flags)
{
	write(1, &c, 1);
	flag->nb_print++;
}