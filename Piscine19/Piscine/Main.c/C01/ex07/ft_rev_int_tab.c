/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldumont <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 21:53:54 by ldumont           #+#    #+#             */
/*   Updated: 2019/08/12 22:37:11 by ldumont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		inverse(int t[],int n, int i)
{
	 int temp;
	if(i>=(n+1)/2 )
	{
		return t;
	}
	else
	{
		temp = t[i];
		t[i]=t[n-i];
		t[n-i]=temp;
		return inverse (t,n,i+1);
	}
}

int		main(void)
{
	int t[5];

	t = ['a', 'b', 'c', 'd', 'e'];
	inverse(t[], int n, int i);
	return (0);
}
