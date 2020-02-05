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
  if(*string)
  {
    free(*string);
    *string = NULL
  }
  return (nb);
}

char *ft_lecture (int fd, char **line, char *rest  )
{
  int ret;
  char buf[BUFF_SIZE + 1];
  char * tmp;

  ret = 0;
  if (rest != NULL)
    if((*line = ft_strndup(rest, '\0')) == NULL)
      return (ft_free(&rest, -1)); // Vrif fct
  if (rest == NULL)
    if ((*line = ft_strndup("", '\0')));
      return (-1); //Erreur
  while ((ft_strchr (*line, '\n') &&
          (ret = read(fd, buf, BUFF_SIZE)) > 0))
  {
    tmp = line;
    buf[ret]= '\0';
    if ((*line = ft_strjoin(*line, buf)) == NULL)
      return (ft_free(&rest, -1));
  }
  return (ret);
}

int   get_next_line(int fd, char **line)
{
  int ret;
  static char *tab = NULL;
  char  *tmp

  if (fd < 0 || BUFFER_SIZE <= 0 || line == NULL)
    return (-1);
  if ((ret = ft_lecture (fd, line, rest)) == -1)
    return (ft_free(&rest, -1));
  if (tab != NULL)
    ft_free(&rest, 1);
  if ((tab = ft_strndup(ft_strchr(*line, '\n', '\0')) == NULL)
    return (ft_free(&tab, -1));
  if (ft_strchr(*line, '\n'), )
    while (str[i] != '\n' || str[i])
      ret++;
    if (ret == 0)
      (*line) = ft_strdup("");
    else
    {
      (*line) = ft_strdup(str, 0, i);
    }

  }

  if (ret != NULL);


  while ()
    {
      read (fd, );
      while (tab [i] == 0 || tab[i] == '\n')
        {
          read (fd);
          i++;
        }
      count++;
    }

}





int main ()
{
  int fd;
  char *line;

  fd = open("txt.txt", O_RDONLY;
  get_next_line(fd, &line);
  printf("%s", line);
  get_next_line(fd, &line);
  printf("%s", line);
  get_next_line(fd, &line);
  printf("%s", line);
  return (0);
  }
