/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdriay <mdriay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/17 16:47:13 by mdriay            #+#    #+#             */
/*   Updated: 2014/12/19 19:54:57 by mdriay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void		trace_columns(int j, int i, t_base *base)
{
	t_coord ptr1;
	t_coord ptr2;

	ptr1.x = (j - i - 1) * (CTZ - base->zoom) + (WIN_X / 2.5) + base->x_i;
	ptr2.x = (j - i) * (CTZ - base->zoom) + (WIN_X / 2.5) + base->x_i;
	ptr1.y = (-2 * base->tab.tab[i + 1][j]) + 							\
	(i + j + 1) * ((CTZ - base->zoom) * 0.5) + (WIN_Y / 5) + base->y_i;
	ptr2.y = (-2 * base->tab.tab[i][j]) + (i + j) * ((CTZ - base->zoom) * 0.5) \
	+ (WIN_Y / 5) + base->y_i;
	ft_drawing(base, ptr1, ptr2);
}

void		trace_lines(int j, int i, t_base *base)
{
	t_coord ptr1;
	t_coord ptr2;

	ptr1.x = (j - i) * (CTZ - base->zoom) + (WIN_X / 2.5) + base->x_i;
	ptr2.x = ((j + 1) - i) * (CTZ - base->zoom) + (WIN_X / 2.5) + base->x_i;
	ptr1.y = (-2 * base->tab.tab[i][j]) + (i + j) * 			\
	((CTZ - base->zoom) * 0.5) + (WIN_Y / 5) + base->y_i;
	ptr2.y = (-2 * base->tab.tab[i][j + 1]) + (i + j + 1) * \
	((CTZ - base->zoom) * 0.5) + (WIN_Y / 5) + base->y_i;
	ft_drawing(base, ptr1, ptr2);
}

void		ft_drawing(t_base *base, t_coord ptr1, t_coord ptr2)
{
	int x;

	x = ptr1.x;
	while (x <= ptr2.x)
	{
		if (ptr2.x - ptr1.x != 0)
			mlx_pixel_put(base->env.mlx, base->env.win, x, ptr1.y + \
			((ptr2.y - ptr1.y) * (x - ptr1.x)) / (ptr2.x - ptr1.x), COLOR);
		x++;
	}
}

int			expose_hook(t_base *base)
{
	int i;
	int j;

	i = 0;
	while (i <= base->tab.i_max)
	{
		j = 0;
		while (j <= base->tab.j_max)
		{
			if (j + 1 <= base->tab.j_max)
				trace_lines(j, i, base);
			if (i + 1 <= base->tab.i_max)
				trace_columns(j, i, base);
			j++;
		}
		i++;
	}
	return (0);
}
