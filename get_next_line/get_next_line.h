/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldumont <ldumont@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 13:02:44 by ldumont           #+#    #+#             */
/*   Updated: 2020/02/04 14:59:48 by ldumont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H

# define GET_NEXT_LINE_H
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

size_t	ft_strlen(const char *s);
char	*ft_strjoin(char const  *s1, char const *s2);
char	*ft_strdup(const char *s);
char  *ft_strrchr(const char *s, int c);
