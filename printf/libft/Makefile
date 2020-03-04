# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ldumont <ldumont@student.s19.be>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/11 16:29:19 by ldumont           #+#    #+#              #
#    Updated: 2019/10/22 10:46:14 by ldumont          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ./*.c
NAME = libft.a
OBJS = *.o
CFLAGS = -Wall -Wextra -Werror -I$(HEADER)
GCC = gcc
RM = rm -rf
HEADER = ./

all: $(NAME)

$(OBJS): $(SRC)
	$(GCC) $(CFLAGS) -c $(SRC)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all test clean fclean re
