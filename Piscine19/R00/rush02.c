#include <unistd.h>
#include "ft_putchar.c"

void header(int x)
{
	int a = 1;

	ft_putchar('A');
	while( a < (x-1))
	{
		ft_putchar('B');
		a++;
	}
	ft_putchar('A');
	ft_putchar('\n');
}

void middle(int x)
{
int a = 1;

	ft_putchar('B');
	while( a < ( x-1))
	{
		ft_putchar(' ');
		a++;
	}
	ft_putchar('B');
	ft_putchar('\n');
}

void footer(int x)
{
	int a = 1;

	ft_putchar('C');
	while(a < (x-1))
	{
		ft_putchar('B');
		a++;
	}
	ft_putchar('C');
	ft_putchar('\n');
}

void rush(int x, int y)
{
	int b = 1;
	if (x > 0 && y > 0)
	{
		header(x);
		while(b <= (y-2))
		{
		middle(x);
		b++;
		}
		if(y > 1)
		{
		footer(x);
		}
	}	
}


