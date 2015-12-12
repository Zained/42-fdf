/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdriay <mdriay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 12:58:04 by mdriay            #+#    #+#             */
/*   Updated: 2014/11/20 17:21:03 by mdriay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	unsigned int	counter;
	char			*dest;

	if (s == NULL)
		return (NULL);
	dest = ft_strnew(len + 1);
	counter = 0;
	if (dest == NULL)
		return (NULL);
	while (counter < len + start)
	{
		if (counter >= start)
			dest[counter - start] = s[counter];
		counter++;
	}
	return (dest);
}
