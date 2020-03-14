/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebresser <ebresser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 12:02:23 by ebresser          #+#    #+#             */
/*   Updated: 2020/03/10 16:57:23 by ebresser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		freeall(char **array, int i)
{
	while (i > -1)
	{
		free(array[i]);
		i--;
	}
	free(array);
}

static char		*bypass(char *s, char c)
{
	if (*s == c)
	{
		while (*(s + 1) == c)
			s++;
		return (s + 1);
	}
	else
		return (s);
}

static char		**fill(char **array, size_t len, char *st, char cut)
{
	size_t	i;
	size_t	begin;
	size_t	end;

	i = 0;
	begin = 0;
	while (i < len - 1)
	{
		while (st[begin] == cut)
			begin++;
		end = begin;
		while (st[end] != cut && st[end] != '\0')
			end++;
		/*
		* Destructor: Error- Memory leak in allocation. In next line
		*/
		if (!(array[i] = (char *)malloc((end - begin + 1) * sizeof(char))))
		{
			freeall(array, i - 1);
			return (NULL);
		}
		ft_strlcpy(array[i], &st[begin], end - begin + 1);
		begin = end;
		i++;
	}
	array[len - 1] = NULL;
	return (array);
}

static int		wcount(const char *s, char c)
{
	int		size;
	char	*str;

	size = 0;
	str = (char*)s;
	str = bypass(str, c);
	while (*str)
	{
		while (*str != c && *str != '\0')
			str++;
		if (*str == c)
		{
			str = bypass(str, c);
			size++;
		}
		else if (*str == '\0')
			size++;
	}
	return (size);
}

char			**ft_split(char const *s, char c)
{
	char	**splitted;
	char	*str;
	int		wc;

	if (!s)
		return (NULL);
	if (c == '\0')
	{
		wc = 1;
		if (!(splitted = (char **)malloc((wc + 1) * sizeof(char *))))
			return (NULL);
		splitted[0] = ft_strdup(s);
		splitted[1] = NULL;
		return (splitted);
	}
	str = (char *)s;
	wc = wcount(s, c);
	/*
	* Destructor: Error- Memory leak in allocation. In next line
	*/
	if (!(splitted = (char **)malloc((wc + 1) * sizeof(char *))))
		return (NULL);
	if (*s == '\0')
		splitted[0] = NULL;
	else
		splitted = fill(splitted, wc + 1, str, c);
	return (splitted);
}
