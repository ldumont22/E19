/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldumont <ldumont@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 16:13:56 by ldumont           #+#    #+#             */
/*   Updated: 2019/11/28 14:19:12 by ldumont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	void_i(unsigned int i, char s)
{
	return (s + i);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		counter;
	char	*str;

	counter = 0;
	if (s == 0)
		return (NULL);
	while (s[counter])
		++counter;
	if (!(str = (char*)malloc(counter + 1 * sizeof(char))))
		return (NULL);
	counter = 0;
	while (s[counter])
	{
		str[counter] = f(counter, s[counter]);
		++counter;
	}
	str[counter] = '\0';
	return (str);
}
