#include <unistd.h>
#include <stdio.h>

int		ft_strlen(char *str)
{
	int compteur;

	compteur = 0;
	while (*str != '\0')
	{
		compteur++;
		str++;
	}
	return compteur;
}

int		main(void)
{
	char *str;

	str = "yes";
	ft_strlen(str);
	printf("%d", ft_strlen(str));
return (0);
}
