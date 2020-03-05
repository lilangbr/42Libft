/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebresser <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 17:13:46 by ebresser          #+#    #+#             */
/*   Updated: 2020/03/05 15:33:14 by ebresser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int					ft_lstsize(t_list *lst)
{
	t_list	*runner;
	int		count;

	runner = lst;
	count = 0;
	while (runner)
	{
		count++;
		runner = runner->next;
	}
	return (count);
}
