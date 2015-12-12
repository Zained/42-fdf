/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdriay <mdriay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 17:30:13 by mdriay            #+#    #+#             */
/*   Updated: 2014/11/21 14:11:33 by mdriay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	i;
	char	*s1;
	char	*s2;

	s1 = (char *)dst;
	s2 = (char *)src;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	i = 0;
	while (i < n && s2[i] != c)
	{
		s1[i] = s2[i];
		i++;
	}
	if (s2[i] == c && i < n)
	{
		s1[i] = s2[i];
		return ((void *)&s1[i + 1]);
	}
	return (NULL);
}
