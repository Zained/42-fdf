/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdriay <mdriay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/14 13:05:31 by mdriay            #+#    #+#             */
/*   Updated: 2014/11/20 14:26:52 by mdriay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*tmp;

	tmp = NULL;
	if (*alst && alst)
	{
		tmp = *alst;
		while (tmp)
			ft_lstdelone(&tmp, del);
		*alst = NULL;
	}
}
