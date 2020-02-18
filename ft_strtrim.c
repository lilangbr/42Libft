/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebresser <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 12:50:55 by ebresser          #+#    #+#             */
/*   Updated: 2020/02/18 19:53:46 by ebresser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char *findinitial(const char *sub, const char *set)
{
	char	*p;
	
	p = ft_strchr(sub, (int)*set);
	if (p)
		return (p);
	else
		return (NULL);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	char	*s2;
	int		find;

	if(!s1)
		return (NULL);
	s2 = (char *)malloc((ft_strlen(s1) + 1 ) * sizeof(char));
	if (!s2)
		return (NULL);
	if (!set)
		return (s2);
	ft_strlcpy(s2, s1, ft_strlen(s1) + 1);
	ptr = s2;
	find = 1;
	while (ptr)
	{
		ptr = findinitial(ptr, set);
		if (ptr)
		{
			if (!ft_strncmp(ptr, set, ft_strlen(set)))
			{
				*ptr = '\0';
				ft_strlcat(s2, ptr + ft_strlen(set), ft_strlen(s1) + 1);
			}
			else
				ptr++;
		}
	}
	return (s2);
}
