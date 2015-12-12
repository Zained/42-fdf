/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdriay <mdriay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 17:53:29 by mdriay            #+#    #+#             */
/*   Updated: 2014/11/20 17:24:11 by mdriay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*s1;
	char	*s2;

	s1 = (char *)dst;
	s2 = (char *)src;
	i = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	while (i < n)
	{
		s1[i] = s2[i];
		i++;
	}
	return (s1);
}
