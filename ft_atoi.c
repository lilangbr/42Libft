/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebresser <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 16:47:01 by ebresser          #+#    #+#             */
/*   Updated: 2020/02/15 17:51:35 by ebresser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	unsigned char *p;
	int i;
	int signal;

	signal = 0;
	p = (unsigned char *)nptr;
	while (!isalpha(p[i]))
	{
		if (p[i] == ' ' && !signal)
			i++;
		else if (p[i] == '-')
			signal--;
		else if (p[i] == '+')
			signal++;			
		else if (isdigit(p[i]))





}
