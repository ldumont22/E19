/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldumont <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 15:57:46 by ldumont           #+#    #+#             */
/*   Updated: 2019/08/18 09:54:26 by ldumont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int i;
	int ant;

	i = 0;
	while (str[i])
	{
		ant = str[i - 1];
		if (str[i] == str[0] || ant == 32 || ant == 45 || ant == 43)
		{
			if (97 <= str[i] && str[i] <= 122)
			{
				str[i] = str[i] - 32;
			}
		}
		i++;
	}
	return (str);
}

int		main(void)
{
	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et";

	printf("%s", ft_strcapitalize(str));
	return (0);
}
