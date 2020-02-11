/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldumont <ldumont@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 17:01:21 by ldumont           #+#    #+#             */
/*   Updated: 2020/02/06 17:18:35 by ldumont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>

size_t	ft_strlen(const char *s);
char	*ft_strjoin(char const  *s1, char const *s2);
char	*ft_strndup(const char *s, const char c);
char  *ft_strchr(const char *s, int c);
int   ft_free(char **string, int nb);
int		ft_lecture(int fd, char **line, char *rest);
int   get_next_line(int fd, char **line);

#endif
