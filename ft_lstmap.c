/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebresser <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 10:17:27 by ebresser          #+#    #+#             */
/*   Updated: 2020/03/09 10:17:35 by ebresser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *map;

	if (!lst)
		return (NULL);
	else
	{
		if (!(map = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&map, del);
			return (NULL);
		}
		map->next = ft_lstmap(lst->next, f, del);
		return (map);
	}
}
