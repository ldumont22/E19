#include <string.h>
#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;
	unsigned int compteur;

	i = 0;
	j = 0;
	compteur  = 0;
	while (dest[i] != '\0' && i < size)
		i++;
	compteur += i;
	while (src[j])
		j++;
	compteur += j;
	if (i == size)
		return (compteur);
	j = 0;
	while (src[j] && i + j < size - 1)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (compteur);
}

int		main(void)
{
	char dest[] = "ceci";
	char src[] = "estun";
	unsigned int size = 5;


	printf("%lu\n", strlcat(dest, src, size));
	printf("%u\n", ft_strlcat(dest, src, size));
	return (0);
}
