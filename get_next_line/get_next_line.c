/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldumont <ldumont@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 15:41:53 by ldumont           #+#    #+#             */
/*   Updated: 2020/02/04 16:26:57 by ldumont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *ft_lecture (char *tab , int fd)
{
  int lecture;
  char buf[BUFF_SIZE + 1];

  while ((lecture = read(fd, buf, BUFF_SIZE)) > 0)
  {
    buf[lecture] = '\0';
    str = ft_strjoin(str, buf);
  }
  return str;
}

int   get_next_line(int fd, char **line)
{
  int i;
  int j;
  static char *tab;


  i = 0;
  while (count == \n);
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
  prinf("%")
  get_next_line(fd, &line);
      get_next_line(fd, 2);
      argc = 0;
      return 0;
  }
