/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebresser <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 13:13:21 by ebresser          #+#    #+#             */
/*   Updated: 2020/02/07 15:25:37 by ebresser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *p1;
	unsigned char *p2;

	p1 = (unsigned char *)dst;
	p2 = (unsigned char *)src;
	if (dst == src)
		return (dst);
	while (n > 0)
	{
		*p1 = *p2;
		p1++;
		p2++;
		n--;
	}
	return (dst);
}
