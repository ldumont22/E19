/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldumont <ldumont@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 20:05:12 by ldumont           #+#    #+#             */
/*   Updated: 2020/12/10 21:54:36 by ldumont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/cub3d.h"
#include <mlx.h>

typedef struct  s_data {
    void        *img;
    char        *addr;
    int         bits_per_pixel;
    int         line_length;
    int         endian;
}               t_data;

int             main(void)
{
    void    *mlx;
    void    *mlx_win;
    t_data  img;

    mlx = mlx_init();
    mlx_win = mlx_new_window(mlx, 720, 480, "Nsm");
    img.img = mlx_new_image(mlx, 720, 480);
    img.addr = mlx_get_data_addr(img.img, &img.bits_per_pixel, &img.line_length,
                                 &img.endian);
    mlx_put_image_to_window(mlx, mlx_win, img.img, 0, 0);
    mlx_loop(mlx);
}