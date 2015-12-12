/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdriay <mdriay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/16 12:09:13 by mdriay            #+#    #+#             */
/*   Updated: 2015/02/23 16:04:23 by mdriay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int		check_arg(char *map)
{
	int		fd;
	int		check;
	char	*buf;

	if ((fd = open(map, O_RDONLY)) < 0)
		return (1);
	if (!(buf = (char *)malloc(sizeof(char) * 64)))
		return (1);
	if (!(check = read(fd, buf, 64)))
		return (1);
	free(buf);
	return (0);
}

int		main(int ac, char **av)
{
	t_base	base;
	char	***grid;

	if (ac != 2 || check_arg(av[1]))
		ft_error(0);
	grid = read_gnl(av[1]);
	base.tab = switch_tab(grid);
	base.env.mlx = mlx_init();
	base.env.win = mlx_new_window(base.env.mlx, WIN_X, WIN_Y, "FDF_42");
	mlx_key_hook(base.env.win, key_hook, &base);
	mlx_expose_hook(base.env.win, expose_hook, &base);
	mlx_loop(base.env.mlx);
	return (0);
}
