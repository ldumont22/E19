#include <unistd.h>

void	ft_print_comb_2(void)
{
	char tab[5];

	tab[0] = '0';
	tab[1] = '1';
	tab[2] = '2';
	tab[3] = ',';
	tab[4] = ' ';
	while ( tab[0] < '7')
	{	
		while (tab[1] <= '8')
		{	
			while (tab[2] <= '9')
			{
				write(1, &tab[0 & 1 & 2 & 3 &4],5);
				tab[2]++;
			}
			tab[1]++;
			tab[2] = tab[1] + 1;
		}
		tab[0]++;
		tab[1] = tab[0] + 1;
		tab[2] = tab[0] + 2;
	}
	write(1, &tab[0 & 1 & 2], 3);
}

int		main(void)
{
	ft_print_comb_2();
	return (0);
}
