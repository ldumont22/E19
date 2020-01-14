#include <stdio.h>

int		ft_atoi(char *str)
{
	int res;
	int sign;
	int i;

	res = 0;
	sign = 0;
	i = 0;
	while (str[i] < 33) //tant que white space
		i++;
	while (str[i] == '+' || str[i] == '-') // tant que signe
	{
		if (str[i] == '-')
			sign++;
		i++;
	}
	while (str[i] && (str[i] >= '0') && (str[i] <= '9')) // tant que chiffre
	{
		res = res * 10 + (str[i] - 48); // transfromation en int
		i++;
	}
	return (sign % 2 == 1) ? res = res * (-1) : res;
}

int main()
{
	printf("%d", ft_atoi("   ---+--+123424ab567"));
	return (0);
}
