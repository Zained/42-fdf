/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdriay <mdriay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 15:42:14 by mdriay            #+#    #+#             */
/*   Updated: 2014/11/21 14:49:24 by mdriay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
		return (0);
	if (!(*s1 && *s2 && (unsigned char)*s1 == (unsigned char)*s2))
		return ((unsigned char)*s1 - (unsigned char)*s2);
	return (ft_strncmp(s1 + 1, s2 + 1, n - 1));
}
