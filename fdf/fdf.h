/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdriay <mdriay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/16 12:15:31 by mdriay            #+#    #+#             */
/*   Updated: 2015/02/23 15:59:37 by mdriay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <strings.h>
# include <math.h>
# include <mlx.h>
# include <fcntl.h>
# include "libft/libft.h"
# define BUFF_SIZE 64
# define WIN_X 1500
# define WIN_Y 1000
# define EXIT_WIN 65307
# define COLOR 0xFFFFFF
# define CTZ 32
# define LEFT 65361
# define UP 65362
# define RIGHT 65363
# define DOWN 65364
# define ZOOM_IN 65365
# define ZOOM_OUT 65366
# define VAL "1234567890-"

typedef struct	s_tab
{
	int			**tab;
	int			i_max;
	int			j_max;
}				t_tab;

typedef struct	s_env
{
	void		*mlx;
	void		*win;
}				t_env;

typedef struct	s_base
{
	t_env		env;
	t_tab		tab;
	int			zoom;
	int			x_i;
	int			y_i;
}				t_base;

typedef struct	s_coord
{
	int			x;
	int			y;
}				t_coord;

char			***read_gnl(char *map);
t_tab			switch_tab(char ***str);
int				get_next_line(int fd, char **line);
int				expose_hook(t_base *base);
int				key_hook(int keycode, t_base *base);
void			ft_drawing(t_base *base, t_coord ptr1, t_coord ptr2);
void			trace_lines(int j, int i, t_base *base);
void			trace_columns(int j, int i, t_base *base);
void			add_key(int keycode, t_base *base);
int				check_arg(char *map);
void			ft_error(int error);

#endif
