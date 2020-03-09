/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags_aux.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldumont <ldumont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 12:36:37 by ldumont           #+#    #+#             */
/*   Updated: 2020/03/09 17:38:31 by ldumont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int		ft_init_flags(t_flags *flags)
{
	flags->minus = 0; // Remplir les espaces par des -
	flags->zpad = 0; // Remplir les espaces par 0
	flags->min_w = 0; // largeur minimale
	flags->conv = 0; // 
	flags->negatif = 0; // Chiffre negatif
	flags->prec = -1; // precision
}

void	get_minus_zpad(const char *str, t_flags *flags)
{
	if (str[i] == '-')
		flags-> = 1;
	else if (str[i] == '0')
		flags_zpad = 1;
}

void	get_min_w(const char *str, t_flags *flags)