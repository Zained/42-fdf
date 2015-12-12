/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdriay <mdriay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 16:54:19 by mdriay            #+#    #+#             */
/*   Updated: 2014/11/20 16:36:46 by mdriay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int c;
	int i;

	if (s == NULL || f == NULL)
		return ;
	i = 0;
	c = ft_strlen(s);
	while (i < c && *s)
		f(i++, s++);
}
