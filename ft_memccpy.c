/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebresser <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 16:38:02 by ebresser          #+#    #+#             */
/*   Updated: 2020/02/11 18:58:52 by ebresser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;
	unsigned char	*p3;
	size_t			i;

	p1 = (unsigned char *)src;
	p2 = (unsigned char *)dst;
	i = 0;
	while (i < n)
	{
		if (p2[i] == (unsigned char)c)
		{
			//i++;
			p3 = (unsigned char *)&dst[i];
			return (p3);
		}
		else
		{
			p2[i] = p1[i];
			i++;
		}
	}
	return (NULL);
}
