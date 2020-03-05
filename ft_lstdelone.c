/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebresser <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 17:48:44 by ebresser          #+#    #+#             */
/*   Updated: 2020/03/05 15:58:40 by ebresser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Deletes the content of a linked
** list node. It is supposed that the 'del' function
**re-link the list.
*/

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	del(lst->content);
	free(lst);
}
