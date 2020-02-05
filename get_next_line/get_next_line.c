/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldumont <ldumont@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 15:41:53 by ldumont           #+#    #+#             */
/*   Updated: 2020/02/05 18:15:00 by ldumont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int   ft_free(char **string, int nb)
{
	if (*string)
	{
		free(*string);
		*string = NULL;
	}
	return (nb);
}

int		ft_read(int fd, char **line, char *rest)
{
	int			ret;
	char		buf[BUFFER_SIZE + 1];
	char		*tmp;

	ret = 0;
	if (rest != NULL)
		if ((*line = ft_strndup(rest, '\0')) == NULL)
			return (ft_free(&rest, -1));
	if (rest == NULL)
		if ((*line = ft_strndup("", '\0')) == NULL)
			return (-1);
	while ((ft_strchr(*line, '\n') == NULL) &&
			(ret = read(fd, buf, BUFFER_SIZE)) > 0)
	{
		tmp = *line;
		buf[ret] = '\0';
		if ((*line = ft_strjoin(*line, buf)) == NULL)
			return (ft_free(&rest, -1));
		ft_free(&tmp, 1);
	}
	return (ret);
}

int		get_next_line(int fd, char **line)
{
	int			ret;
	static char	*rest = NULL;
	char		*tmp;

	if (fd < 0 || BUFFER_SIZE <= 0 || line == NULL)
		return (-1);
	if ((ret = ft_read(fd, line, rest)) == -1)
		return (ft_free(&rest, -1));
	if (rest != NULL)
		ft_free(&rest, 1);
	if ((rest = ft_strndup(ft_strchr(*line, '\n'), '\0')) == NULL)
		return (ft_free(&rest, -1));
	if (ft_strchr(*line, '\n') == NULL)
		return (ft_free(&rest, 0));
	tmp = *line;
	if ((*line = ft_strndup(*line, '\n')) == NULL)
		return (ft_free(&rest, -1));
	free(tmp);
	tmp = NULL;
	return (1);
}

int main ()
{
  int fd;
  char *line;

  fd = open("txt.txt", O_RDONLY);
  get_next_line(fd, &line);
  printf("%s\n", line);
  get_next_line(fd, &line);
  printf("%s\n", line);
  get_next_line(fd, &line);
  printf("%s\n", line);
  return (0);
  }
