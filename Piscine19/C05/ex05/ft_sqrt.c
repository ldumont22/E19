#include <stdio.h>

int		ft_sqrt(int nb)
{
	int i;

	i = 2;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	if (nb % 2 == 1)
		i = 1;
	while (i <= nb / 2)
	{
		if (i * i == nb)
			return (i);
		i += 2;
	}
	return (0);
}

int		main(void)
{
	int nb;

	nb = 2147483610;
	printf("%d", ft_sqrt(nb));
	return (0);
}

