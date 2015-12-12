/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdriay <mdriay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 13:35:17 by mdriay            #+#    #+#             */
/*   Updated: 2014/11/21 15:45:40 by mdriay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *str)
{
	int				i;
	int				checkneg;
	int				val;

	i = 0;
	checkneg = 1;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
	|| str[i] == '\r' || str[i] == '\f')
		i++;
	if (str[i] == '-')
	{
		checkneg = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	val = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		val = val * 10;
		val = val + (str[i] - '0');
		i++;
	}
	return (checkneg * val);
}
