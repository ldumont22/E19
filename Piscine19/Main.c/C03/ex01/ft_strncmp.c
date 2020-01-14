/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldumont <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 18:35:36 by ldumont           #+#    #+#             */
/*   Updated: 2019/08/14 20:33:44 by ldumont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int i;

	i = 0;
	while (s1[i] && n != 0 && (s1[i] == s2[i]))
	{
		i++;
		n--;
	}
	if (n == 0)
		return (0);
	else
		return (s1[i] - s2[i]);
}

/*	 int		main(void)
{
	char s1[] = "aabaa";
	char s2[] = "aabac";
	int n = 6;

	printf("%d\n", strncmp(s1, s2, n));
	printf("%d\n", ft_strncmp(s1, s2, n));
	return (0);
}*/
