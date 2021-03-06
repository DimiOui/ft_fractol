/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimioui <dimioui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 10:01:58 by dimioui           #+#    #+#             */
/*   Updated: 2022/01/27 11:41:16 by dimioui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# define MAX_ITER 300
# define RES_X 800
# define RES_Y 800
# define ESC 65307
# define ZOOM_IN 4
# define ZOOM_OUT 5
# define L_CLICK 1
# define LEFT 65361
# define RIGHT 65363
# define UP 65362
# define DOWN 65364

# include <mlx.h>
# include <stdio.h>
# include <unistd.h>
# include <stddef.h>
# include <math.h>
# include <stdlib.h>
# include "libft.h"

typedef struct s_data {
	char	*fractal;
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
	void	*mlx;
	void	*mlx_win;
	float	zoom;
	float	ypos;
	float	xpos;
	float	cx;
	float	cy;
}	t_data;

typedef struct s_complex {
	long double	x;
	long double	y;
}	t_complex;

int		mandelbrot(t_complex s, t_complex c);
int		kh_mousezoom(int keycode, int x, int y, t_data *data);
int		kh_keeb(int keycode, t_data *data);
int		create_trgb(int hue);
void	my_mlx_pixel_put(t_data *data, int x, int y, int color);
void	ft_fill_screen(t_data *data, int (*f)(t_complex, t_complex));
void	draw_fractal(t_data *data);
int		julia(t_complex z, t_complex c);
int		choufleur(t_complex z, t_complex c);

#endif
