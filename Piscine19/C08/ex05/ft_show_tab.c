#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>



void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*(str) != '\0')
		ft_putchar(*str++);
}

void	ft_putnbr(int x)
{
	long i;

	i = x;
	if (i < 0)
	{
		ft_putchar('-');
		i = i * (-1);
	}
	if (i > 9)
	{
		ft_putnbr(i / 10);
		ft_putnbr(i % 10);
	}
	else
	{
		ft_putchar(i + '0');
	}
}

void	ft_show_tab(struct s_stock_str *point)
{
	int i;

	i = 0;
	while (point[i].str)
	{
		ft_putstr(point[i].str);
		ft_putchar('\n');
		ft_putnbr(point[i].size);
		ft_putchar('\n');
		ft_putstr(point[i].copy);
		ft_putchar('\n');
		i++;
	}
}
