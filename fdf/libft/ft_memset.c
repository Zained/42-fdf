/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdriay <mdriay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 17:38:07 by mdriay            #+#    #+#             */
/*   Updated: 2014/11/24 18:35:46 by mdriay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*str;

	if (b == NULL)
		return (NULL);
	str = (char *)b;
	i = 0;
	while (i < len)
	{
		str[i] = c;
		i++;
	}
	return ((void *)str);
}
