/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebresser <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 13:04:03 by ebresser          #+#    #+#             */
/*   Updated: 2020/02/14 17:06:53 by ebresser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char    *p;
	char    *n;
	char    *f;
	unsigned int    i;

	p = (char *)haystack;
	n = (char *)needle;
	f = p;
	i = 0;
	if (!ft_strlen(needle))
		return (p);
	while (i + ft_strlen(needle) < ft_strlen(haystack)  && i + ft_strlen(needle) < len)
	{
		f = ft_strchr(p + i, (int)n[0]);
		if (!f)
			return (NULL);
		else
		{
			i = f - p; // = p - haystack;
			if (!ft_strncmp(f, n, ft_strlen(needle)))
				return (f);
		}
	}
	return (NULL);
}
/*ft_strchr(s, int c) - para  primeira letra: 
 * retorna ptr para o caractere
 *ft_strncmp(s1, s2, n) - para a palavra : quero 0
 */

