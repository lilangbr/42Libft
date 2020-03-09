/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebresser <ebresser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 12:50:55 by ebresser          #+#    #+#             */
/*   Updated: 2020/03/09 13:01:40 by ebresser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*finder(const char *s, const char *set, int begin)
{
	char		*p;
	const char	*aux;
	size_t		stop;

	stop = ft_strlen(s);
	p = (char *)s;
	if (!begin)
		p = p + stop - 1;
	aux = set;
	while (stop-- > 0)
	{
		set = aux;
		while (*set)
		{
			if (*set == *p)
			{
				if (begin)
					p++;
				else
					p--;
			}
			set++;
		}
	}
	return (p);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	char	*pb;
	char	*pe;
	char	*s2;
	int		len;

	if (!s1 || !set)
		return (NULL);
	pb = finder(s1, set, 1);
	pe = finder(s1, set, 0);
	len = pe - pb + 1;
	if (pb > pe)
		len = 0;
	s2 = (char *)malloc((len + 1) * sizeof(char));
	if (!s2)
		return (NULL);
	ft_strlcpy(s2, pb, len + 1);
	return (s2);
}
