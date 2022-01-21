/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimioui <dimioui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 10:01:58 by dimioui           #+#    #+#             */
/*   Updated: 2022/01/21 16:05:48 by dimioui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# define MAX_ITER 500
# define RES_X 800
# define RES_Y 800
# define LEFT 65361
# define UP 65362
# define RIGHT 65363
# define DOWN 65364
# define ESC 65307
# define SCROLL_UP 4
# define SCROLL_DOWN 5
# define L_CLICK 1
# define R_CLICK 3

typedef struct s_data {
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
	void	*mlx;
	void	*mlx_win;
	float	zoom;
	long double	cx;
	long double	cy;
	float	ypos;
	float	xpos;
}	t_data;

typedef struct s_complex {
	long double	x;
	long double	y;
}	t_complex;

# include <mlx.h>
# include <stdio.h>
# include <unistd.h>
# include <stddef.h>
# include <math.h>
# include <stdlib.h>

int		mandelbrot(t_complex s, t_complex c);
int		kh_mousezoom(int keycode, int x, int y, t_data *data);
int		kh_keeb(int keycode, t_data *data);
int		create_trgb(int hue);
void	my_mlx_pixel_put(t_data *data, int x, int y, int color);
void	ft_fill_screen(t_data *data);

#endif
