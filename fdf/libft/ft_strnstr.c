/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdriay <mdriay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 16:09:37 by mdriay            #+#    #+#             */
/*   Updated: 2014/11/21 15:46:49 by mdriay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	int		i;
	int		j;

	i = 0;
	if (*s2 == '\0')
		return ((char *)s1);
	while (s1[i] && (size_t)i < n)
	{
		j = 0;
		while (s1[i + j] == s2[j] && (size_t)(i + j) < n)
			j++;
		if (s2[j] == '\0')
			return ((char *)&s1[i]);
		i++;
	}
	return (NULL);
}
