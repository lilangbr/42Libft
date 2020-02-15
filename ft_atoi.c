/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebresser <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 16:47:01 by ebresser          #+#    #+#             */
/*   Updated: 2020/02/15 19:00:16 by ebresser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	convert(char *s, int signal)
{
	size_t	i;
	size_t	pot;
	int		n;

	i = 0;
	pot = 1;
	n = 0;
	while (s[i] > 47 && s[i] < 58)
	{
			i++;
			if (i > 0)
				pot = pot*10;
	}
	while (i >= 0)
	{
		n = n + s[i] * pot;
		i--;
		pot = pot/10;
	}
	if (signal < 0)
		n = n * (-1);
	return (n);
}

int	ft_atoi(const char *str)
{
	char *p;
	int i;
	int signal;

	signal = 0;
	i = 0;
	p = (char *)str;
	while (p[i] == ' ')
		i++;
	if (p[i] == '-')
	{
		signal--;
		i++;
	}
	else if (p[i] == '+')
	{
		signal++;			
		i++;
	}
	else if (p[i] > 47 && p[i] < 58) 
		return (convert(p + i, signal));
	return (0);
}
