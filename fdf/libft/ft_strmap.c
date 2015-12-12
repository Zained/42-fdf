/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdriay <mdriay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 17:07:38 by mdriay            #+#    #+#             */
/*   Updated: 2014/11/20 16:54:11 by mdriay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*tmp;
	size_t	i;
	size_t	c;

	if (s && f)
	{
		i = 0;
		c = ft_strlen((char *)s);
		tmp = ft_strnew(c + 1);
		while (s[i])
		{
			tmp[i] = (f)(s[i]);
			i++;
		}
		return (tmp);
	}
	return (0);
}
