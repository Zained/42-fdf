/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_coord.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdriay <mdriay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/16 12:36:26 by mdriay            #+#    #+#             */
/*   Updated: 2015/02/23 15:58:38 by mdriay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void		add_key(int keycode, t_base *base)
{
	if (keycode == ZOOM_OUT)
		base->zoom += 2;
	if (keycode == ZOOM_IN)
		base->zoom -= 2;
	if (keycode == LEFT)
		base->x_i -= 20;
	if (keycode == RIGHT)
		base->x_i += 20;
	if (keycode == UP)
		base->y_i -= 15;
	if (keycode == DOWN)
		base->y_i += 15;
}

int			key_hook(int keycode, t_base *base)
{
	if (keycode == EXIT_WIN)
		exit(0);
	if (keycode == ZOOM_OUT || keycode == ZOOM_IN || keycode == LEFT \
	|| keycode == RIGHT || keycode == UP || keycode == DOWN)
	{
		add_key(keycode, base);
		mlx_clear_window(base->env.mlx, base->env.win);
		expose_hook(base);
	}
	return (0);
}

t_tab		switch_tab(char ***str)
{
	t_tab	tab;
	int		i;
	int		j;

	while (str[i] != NULL)
		i++;
	tab.tab = malloc(sizeof(tab) * i);
	tab.i_max = i - 1;
	i = 0;
	while (str[i][j] != NULL)
		j++;
	tab.j_max = j - 1;
	while (i <= tab.i_max)
	{
		tab.tab[i] = malloc(sizeof(int) * j);
		j = 0;
		while (str[i][j] != NULL)
		{
			tab.tab[i][j] = ft_atoi(str[i][j]);
			j++;
		}
		i++;
	}
	return (tab);
}

void		ft_error(int error)
{
	if (error == 0)
	{
		ft_putendl("FDF : Map not available");
		exit (0);
	}
}

char		***read_gnl(char *map)
{
	int		fd;
	int		i;
	char	*line;
	char	***tab;

	line = NULL;
	fd = open(map, O_RDONLY);
	while (get_next_line(fd, &line))
		i++;
	tab = malloc(sizeof(tab) * i);
	i = 0;
	close(fd);
	fd = open(map, O_RDONLY);
	while (get_next_line(fd, &line))
	{
		if (ft_strchr(VAL, *line) == 0)
			ft_error(0);
		tab[i] = ft_strsplit(line, ' ');
		i++;
	}
	tab[i + 1] = NULL;
	close(fd);
	return (tab);
}
