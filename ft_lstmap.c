/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebresser <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 17:29:53 by ebresser          #+#    #+#             */
/*   Updated: 2020/03/05 18:04:46 by ebresser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
	t_list *newlist;
	t_list *oldlist;

	oldlist = lst;
	oldlist = f(oldlist->content);
	newlist = ft_lstnew(oldlist->content);
	oldlist = oldlist->next;
	if (newlist)
	{
		while (oldlist)
		{
			t_list **p_newlist;

			p_newlist = &oldlist;
			ft_lstadd_back(p_newlist, oldlist);
			oldlist = oldlist->new;
		}
	}
	return (newlist);
}



