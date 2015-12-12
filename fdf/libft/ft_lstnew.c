/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdriay <mdriay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/13 17:56:24 by mdriay            #+#    #+#             */
/*   Updated: 2014/11/20 14:27:29 by mdriay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*tmp;

	if (content == NULL || content_size <= 0)
		return (NULL);
	if ((tmp = (t_list *)ft_memalloc(sizeof(t_list))) == NULL)
		return (NULL);
	tmp->content = (t_list *)ft_memalloc(content_size);
	if (tmp->content == NULL)
	{
		ft_memdel((void**)&tmp);
		return (NULL);
	}
	ft_memcpy(tmp->content, content, content_size);
	tmp->content_size = content_size;
	tmp->next = NULL;
	return (tmp);
}
