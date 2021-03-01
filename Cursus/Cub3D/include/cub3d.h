/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldumont <ldumont@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 12:46:47 by ldumont           #+#    #+#             */
/*   Updated: 2020/12/10 20:47:31 by ldumont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_H
# define CUB3D_H

# include <stdlib.h>
# include <math.h>
# include <stdio.h>
# include <string.h>
# include <fcntl.h>
# include "../mlx/mlx.h"
# include "../libft/libft.h"

typedef struct s_mlx
{
    void    *mlx;
    void    *mlx_win;
}           t_mlx;

#endif