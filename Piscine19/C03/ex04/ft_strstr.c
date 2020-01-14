#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
		return (str);
	if (str == '\0')
		return (0);
	while (str[i])
	{
		while (str[i + j] == to_find[j])
		{
			j++;
			if (to_find[j] == '\0')
				return (&str[i]);
		}
		j = 0;
		i++;
	}
	return (0);
}

int		main(void)
{
	char str[] = "";
	char to_find[] = "test";

	printf("%s\n", strstr(str, to_find));
	printf("%s\n", ft_strstr(str, to_find));
	return (0);
}
