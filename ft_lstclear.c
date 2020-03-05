/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebresser <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 15:59:25 by ebresser          #+#    #+#             */
/*   Updated: 2020/03/05 17:18:24 by ebresser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *delete;

	while (*lst)
	{
		delete = *lst;
		*lst = (*lst)->next;
		ft_lstdelone(delete, del);
	}
}
