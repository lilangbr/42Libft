/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebresser <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 17:37:24 by ebresser          #+#    #+#             */
/*   Updated: 2020/01/31 13:27:17 by ebresser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*subs;
	size_t	sizem;

	if (len <= ft_strlen(s) - start)
		sizem = len + 1;
	else
		sizem = ft_strlen(s) - start + 1;
	if ((start <= ft_strlen(s) - 1) && (len != 0))
	{
		subs = (char*)malloc((sizem) * sizeof(char));
		if (subs == NULL)
			return (NULL);
		i = start;
		while ((i <= ft_strlen(s) - 1) && ((i - start) < len))
		{
			subs[i - start] = s[i];
			i++;
		}
		subs[i - start] = '\0';
		return (subs);
	}
	else
		return (NULL);
}
