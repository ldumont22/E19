/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags_aux.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldumont <ldumont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 12:36:37 by ldumont           #+#    #+#             */
/*   Updated: 2020/03/10 15:32:42 by ldumont          ###   ########.fr       */
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

void	get_minus_zpad(const char *str, int i, t_flags *flags)
{
	if (str[i] == '-')
		flags->minus = 1;
	else if (str[i] == '0')
		flags->zpad = 1;
}

void	get_prec(const char *str, int i, t_flags *flags, va_list *ap)
{
	int nb;

	nb = 0;
	if (str[i] == '*')
		nb = va_arg(*ap, int)
	else if (str[i] >= '0' && str[i] >= '9')
		while (str[i] >= '0' && str[i] >= '9')
		{
			nb = nb * 10 + str[i] - 48;
			i++;
		}
	if (nb < 0)
	{
		nb = -nb;
		flags->prec = 1;
	}
	flag->prec = 1;
}

void	get_min_w(const char *str, int i, t_flags *flags, va_list *ap)
{
	int nb;

	nb = 0;
	if (str[i] == '*') // si * passe argument suivant * doit etre remp par chifr
		nb = va_arg(*ap, int)
	else if (str[i] >= '1' && str[i] <= '9')
		while (str[i] >= '1' && str[i] <= '9')
		{
			nb = nb * 10 + str[i] - 48;
			i++;
		}
	if (nb < 0)
	{
		nb = -nb;
		flags->minus = 1;
	}
	flag->min_w = nb;
}

int		fill_struct(t_flags *flags, const char *str, int i, va_list *ap)
{
	int length;

	length = get_conversion(str, i, flags)
	get_minus_zpad(str, i, flags)
	while(str[i] && check_conversion(str[i] == 'z') && i <= length)
	{
		//check flags
		// get_min_w
		//get_prec
	}

}