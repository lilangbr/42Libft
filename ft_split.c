/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebresser <ebresser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 12:02:23 by ebresser          #+#    #+#             */
/*   Updated: 2020/02/19 21:18:25 by ebresser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Parameters 
 * #1. The string to be split.
 * #2. The delimiter character.
 * Return value 
 * The array of new strings resulting from the split.
 * NULL if the allocation fails.
 * External functs. 
 * malloc, free
 * Description 
 * Allocates (with malloc(3)) and returns an array
 * of strings obtained by splitting ’s’ using the
 * character ’c’ as a delimiter. The array must be
 * ended by a NULL pointer.
 */

#include "libft.h"

//char	*marked(char const *s1, char m)
//{
//	char	*s2;
	//char	sm[2];
//	int	i;

	//sm[0] = m;
	//sm[1] = '\0';
	//s2 = ft_strtrim(s1, sm);
//	i = 0;
//	while (s2[i] != '\0')
//	{
//		if (s2[i] == m)
//			s2[i] = '\0';
//		i++;
//	}
//	return (s2);
//}

char	**ft_split(char const *s, char c)
{
	//char	*smarked;
	//char	*ssmarked;
	char	*ps;
	char	sm[2];
	char	**splited;
	size_t	i;
	size_t	j;
	size_t	size;

	if (!s)
		return (NULL);
	sm[0] = c;
	sm[1] = '\0';
	ps = ft_strtrim(s, sm);
	//smarked = marked(s, c);
	//ssmarked = smarked;
	size = 0;
	i = 0;
	while (i < ft_strlen(ps) + 1)
	{
		//if (smarked[i] == '\0')
		if (ps[i] == c)
			size++;
		i++;
	}
	size++; //o \0 final nao eh contado!
	splited = (char **)malloc(size * sizeof(char *));
	if (!splited)
		return (NULL);
	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (ps[j] != c) //ssmarked
			j++;
		splited[i] = (char *)malloc( (j + 1) *sizeof(char));
		if (!splited[i])
			return (NULL);
		ft_strlcpy(splited[i], ps, j + 1); //ssmarked
		ps = ps + j + 1; //ssmarked
		i++;
	}
	
	j = 0;
	while (ps[j] != '\0') //ssmarked
		j++;
	splited[i] = (char *)malloc( (j + 1) *sizeof(char));
	if (!splited[i])
		return (NULL);
	ft_strlcpy(splited[i], ps, j + 1); //ssmarked
	return (splited);
}
