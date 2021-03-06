#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_check(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
		i++;
	if (base[0] == '\0' || i == 1)
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] < 33 || base[i] == 127)
			return (0);
		j = 1;
		while (base[i + j])
		{
			if (base[i + j] == base[i])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	i;
	unsigned int	nb;

	if (ft_check(base))
	{
		i = 0;
		nb = nbr;
		if (nbr < 0)
		{
			ft_putchar('-');
			nb = nb * -1;
		}
		while (base[i])
			i++;
		if (nb >= i)
			ft_putnbr_base(nb / i, base);
		ft_putchar(base[nb % i]);
	}
}
