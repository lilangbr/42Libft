/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebresser <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 08:57:53 by ebresser          #+#    #+#             */
/*   Updated: 2020/03/13 15:22:35 by ebresser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			number_of_digits(int n)
{
	int div;
	int len;

	len = 1;
	div = n / 10;
	while (div != 0)
	{
		div = div / 10;
		len++;
	}
	return (len);
}

static unsigned int	modulo(int n)
{
	unsigned int modulo;

	if (n < 0)
		modulo = -n;
	else
		modulo = n;
	return (modulo);
}

char				*ft_itoa(int n)
{
	char			*a;
	int				len;
	unsigned int	n_maior;

	len = number_of_digits(n) + 1;
	if (n < 0)
		len++;
	if (!(a = (char*)malloc(len * sizeof(char))))
		return (NULL);
	else
	{
		n_maior = modulo(n);
		if (n < 0)
			a[0] = '-';
		a[len - 1] = '\0';
		while ((n_maior / 10) != 0 && len > 1)
		{
			a[len - 2] = '0' + (n_maior % 10);
			n_maior = n_maior / 10;
			len--;
		}
		a[len - 2] = '0' + (n_maior % 10);
	}
	return (a);
}
