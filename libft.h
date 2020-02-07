/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebresser <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 17:51:07 by ebresser          #+#    #+#             */
/*   Updated: 2020/02/07 17:38:40 by ebresser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __LIBFT_H__
#define __LIBFT_H__

#include <stddef.h>
#include <stdlib.h>
#include <string.h>

void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putendl_fd(char *s,int fd);
char	*ft_itoa(int n);
size_t	ft_strlen(const char *s);
char	*ft_substr(const char *s, unsigned int start, size_t len);
char	*ft_strjoin(const char *s1, const char *s2);
int     ft_strncmp(const char *s1, const char *s2, size_t n);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);


#endif
