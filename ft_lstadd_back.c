/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebresser <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 17:53:17 by ebresser          #+#    #+#             */
/*   Updated: 2020/03/05 15:46:58 by ebresser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *last;

	if (new)
	{
		last = ft_lstlast(*lst);
		if (last)
			last->next = new;
		else
			*lst = new;
		new->next = NULL;
	}
}
