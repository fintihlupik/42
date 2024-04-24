/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pterekho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 13:01:33 by pterekho          #+#    #+#             */
/*   Updated: 2024/02/17 14:01:44 by pterekho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char *s)
{
	size_t	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*to_return;

	if (!s1)
	{
		s1 = (char *)malloc(sizeof(char) * 1);
		*s1 = 0;
	}
	if (!s2 || !s1)
		return (s1);
	to_return = ft_join(s1, s2);
	return (to_return);
}

char	*ft_strchr(char *s, int c)
{
	if (!s)
		return (NULL);
	while (*s && *s != (char)c)
		s++;
	if (*s == (char)c)
		return ((char *)s);
	return (NULL);
}

char	*ft_join(char *s1, char *s2)
{
	char	*p;
	char	*original;
	char	*s1_origin;

	s1_origin = s1;
	p = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!p)
		return (NULL);
	original = p;
	while (*s1)
	{
		*p = *s1;
		p++;
		s1++;
	}
	while (*s2)
	{
		*p = *s2;
		p++;
		s2++;
	}
	*p = 0;
	free(s1_origin);
	return (original);
}
