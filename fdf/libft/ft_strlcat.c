/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdriay <mdriay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 19:51:33 by mdriay            #+#    #+#             */
/*   Updated: 2014/11/21 14:59:56 by mdriay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	s_dst;
	size_t	s_src;
	size_t	tmp;

	if (dst && src)
	{
		s_dst = ft_strlen(dst);
		s_src = ft_strlen(src);
		if (size <= s_dst)
			return (s_src + size);
		else
		{
			tmp = size - s_dst - 1;
			ft_strncat(dst, src, tmp);
			return (s_dst + s_src);
		}
	}
	return (0);
}
