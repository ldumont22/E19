# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ldumont <ldumont@student.s19.be>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/08 13:03:37 by ldumont           #+#    #+#              #
#    Updated: 2020/12/10 22:20:03 by ldumont          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Cub3D

CUB = ./map.cub

MLX = ./mlx/libmlx.a

LIBFT = ./libft/libft.a

SRCS = 

FLGS = -Wall -Wextra -Werror -framework OpenGL -framework Appkit

HEADER = ./cub3d.h

all:	
		make -C ./mlx
		make -C ./libft
		gcc -o $(NAME) -I$(HEADER) $(FLGS) $(SRCS) $(LIBFT) $(MLX)

clean:
	make -C ./mlx clean
	make -C ./libft clean
	rm -rf *.o

fclean:
	make -C ./mlx clean
	make -C ./libft fclean
	rm -rf *.o
	rm -rf ${NAME}
	
re: fclean all

.PHONY: all fclean clean re

COMPIL: gcc -Lmlx -lmlx -framework OpenGL -framework AppKit test.c && ./a.out