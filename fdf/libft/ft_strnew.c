/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdriay <mdriay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 14:53:50 by mdriay            #+#    #+#             */
/*   Updated: 2014/11/20 17:33:43 by mdriay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*new;
	size_t	i;

	if ((new = (char *)malloc(sizeof(char) * size + 1)))
	{
		i = 0;
		while (i < size + 1)
		{
			new[i] = '\0';
			i++;
		}
		return (new);
	}
	return (NULL);
}
