#include <unistd.h>
#include <stdio.h>
#include <string.h>

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

int		main()
{
	char s1[] = "cde";
	char s2[] = "abc";

	printf("%d", strcmp(s1, s2));
	return (0);
}
