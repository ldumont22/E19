/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldumont <ldumont@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 17:01:12 by ldumont           #+#    #+#             */
/*   Updated: 2020/02/11 08:45:50 by ldumont          ###   ########.fr       */
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

int		ft_lecture(int fd, char **line, char *rest)
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
	static char	*rest[FOPEN_MAX];
	char		*tmp;

	if (fd < 0 || BUFFER_SIZE <= 0 || line == NULL)
		return (-1);
	if ((ret = ft_lecture(fd, line, rest[fd])) == -1)
		return (ft_free(&rest[fd], -1));
	if (rest[fd] != 0)
		ft_free(&rest[fd], 1);
	if ((rest[fd] = ft_strndup(ft_strchr(*line, '\n'), '\0')) == NULL)
		return (ft_free(&rest[fd], -1));
	if (ft_strchr(*line, '\n') == NULL)
		return (ft_free(&rest[fd], 0));
	tmp = *line;
	if ((*line = ft_strndup(*line, '\n')) == NULL)
		return (ft_free(&rest[fd], -1));
	free(tmp);
	tmp = NULL;
	return (1);
}
/*
int main ()
{
  int fd;
  char *line;

  fd = open("txt.txt", O_RDONLY);

  while (get_next_line(fd, &line) > 0)
  {
    printf("%s\n", line);
    free(line);
  }

  get_next_line(fd, &line);
  printf("%s", line);
  get_next_line(fd, &line);
  printf("%s", line);
  get_next_line(fd, &line);
  printf("%s", line);

  close(fd);
  return (0);
}
*/
