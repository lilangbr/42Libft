/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebresser <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 08:57:53 by ebresser          #+#    #+#             */
/*   Updated: 2020/02/05 19:40:33 by ebresser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int			number_of_digits(int n)
{
	int div;
	int len;

	len = 1;
	div = n / 10;
	if (div != 0)
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
	a = (char*)malloc(len * sizeof(char));
	if (a == NULL)
		return (NULL);
	else
	{
		n_maior = modulo(n);
		if (n < 0)
			a[0] = 45;
		a[len - 1] = '\0';
		while ((n_maior / 10) != 0)
		{
			a[len - 2] = '0' + (n_maior % 10);
			n_maior = n_maior / 10;
			len--;
		}
		a[len - 2] = '0' + (n_maior % 10);
	}
	return (a);
}
