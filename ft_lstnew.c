/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebresser <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 14:48:15 by ebresser          #+#    #+#             */
/*   Updated: 2020/03/05 15:04:48 by ebresser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list				*ft_lstnew(void *content)
{
	t_list *lst;

	if ((lst = malloc(sizeof(t_list))))
	{
		lst->content = content;
		lst->next = NULL;
	}
	return (lst);
}
