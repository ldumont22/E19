#include <stdlib.h>
#include <stdio.h>

void	ft_inversion(int *tab, int a)
{
	int c;

	c = tab[a];
	tab[a] = tab[a + 1];
	tab[a + 1] = c;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int compteur;
	int a;

	compteur = 0;
	while (compteur <= size)
	{
		a = 0;
		while (a < size - 1)
		{
			if (tab[a] > tab[a + 1])
			{
				ft_inversion(tab, a);
			}
			a++;
		}
		compteur++;
	}
}

int		main(void)
{
	int tab[5];
	int size;

	tab[0] = 7;
	tab[1] = 3;
	tab[2] = 10;
	tab[3] = -20;
	tab[4] = -1;
	size = 5;
	ft_sort_int_tab(tab, size);
	printf("%d, %d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3], tab[4]);
	return (0);
}
