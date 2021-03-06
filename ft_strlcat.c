/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebresser <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 16:55:40 by ebresser          #+#    #+#             */
/*   Updated: 2020/02/14 08:30:47 by ebresser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	min(size_t a, size_t b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

size_t			ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t j;
	size_t s_dst;

	s_dst = ft_strlen(dst);
	i = s_dst;
	j = 0;
	if (dstsize > ft_strlen(dst) + 1)
	{
		while (i < (dstsize - 1) && src[j] != '\0')
		{
			dst[i] = src[j];
			i++;
			j++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src) + min(dstsize, s_dst));
}
