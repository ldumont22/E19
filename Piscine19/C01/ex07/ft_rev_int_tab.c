#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int compteur;

	compteur = 0;
	while(size != 0)
	{
		t[compteur] = *tab[size];
		compteur++;
		size--;
	}

	compteur = 0;

	while(t[compteur] != '\0')
	{
		*tab[compteur] = t[compteur];
		compteur++;
	}
}

