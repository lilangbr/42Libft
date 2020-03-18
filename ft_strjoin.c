/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebresser <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 11:16:12 by ebresser          #+#    #+#             */
/*   Updated: 2020/03/12 17:52:35 by ebresser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	copylen(char *scpy, const char *s)
{
	int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		scpy[i] = s[i];
		i++;
	}
}

char		*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	size_t	k;
	char	*s;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	if (!(s = (char*)malloc(len * sizeof(char))))
		return (NULL);
	copylen(s, s1);
	k = ft_strlen(s1);
	copylen(&s[k], s2);
	k = k + ft_strlen(s2);
	s[k] = '\0';
	return (s);
}
