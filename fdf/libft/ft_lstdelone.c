/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdriay <mdriay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/14 12:35:42 by mdriay            #+#    #+#             */
/*   Updated: 2014/11/20 14:27:02 by mdriay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*tmp;

	tmp = NULL;
	if (*alst == NULL)
		return ;
	if (*alst && alst)
	{
		if (del)
		{
			del((*alst)->content, (*alst)->content_size);
			(*alst)->content = NULL;
		}
		(*alst)->content_size = 0;
		tmp = (*alst)->next;
		free(*alst);
		*alst = tmp;
	}
}
