/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdriay <mdriay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 15:46:37 by mdriay            #+#    #+#             */
/*   Updated: 2014/11/20 17:21:14 by mdriay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*final;
	char	*tmp;
	char	*end;
	size_t	i;

	if (s == NULL)
		return (NULL);
	tmp = ft_strnew(ft_strlen(s) + 1);
	end = (char *)s + (ft_strlen(s) - 1);
	i = 0;
	while (*s == ' ' || *s == '\n' || *s == '\t')
		s++;
	while (*end == ' ' || *end == '\n' || *end == '\t')
		end--;
	while (s <= end)
		tmp[i++] = *s++;
	tmp[i] = '\0';
	final = ft_strnew(ft_strlen(tmp));
	ft_strcpy(final, tmp);
	ft_strdel(&tmp);
	return (final);
}
