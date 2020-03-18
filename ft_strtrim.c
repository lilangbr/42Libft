/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebresser <ebresser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 12:50:55 by ebresser          #+#    #+#             */
/*   Updated: 2020/03/13 12:23:48 by ebresser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		isin(char c, char const *set)
{
	if (!*set)
		return (0);
	else if (c == *set)
		return (1);
	else
		return (isin(c, ++set));
}

static int		marker(const char *s, const char *set, int begin)
{
	int			i;
	size_t		go;
	int			iter;
	size_t		s_len;

	s_len = ft_strlen(s);
	i = 0;
	iter = 1;
	go = 1;
	if (!begin)
	{
		i = s_len - 1;
		iter = -1;
	}
	while (s_len && go)
	{
		if (isin(s[i], set) && s[i] != '\0' && i > -1)
		{
			i = i + iter;
			s_len--;
		}
		else
			go = 0;
	}
	return (i);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	int		b;
	int		e;
	char	*s2;
	char	*s;
	int		len;

	if (!s1 || !set)
		return (NULL);
	s = (char*)s1;
	b = marker(s1, set, 1);
	e = marker(s1, set, 0);
	len = e - b + 1;
	if (b > e)
		len = 0;
	if (!(s2 = (char *)malloc((len + 1) * sizeof(char))))
		return (NULL);
	ft_strlcpy(s2, &s[b], len + 1);
	return (s2);
}
