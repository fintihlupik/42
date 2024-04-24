/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pterekho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 19:07:39 by pterekho          #+#    #+#             */
/*   Updated: 2022/10/27 19:42:53 by pterekho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*pointer;
	char	*original;

	pointer = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!pointer)
		return (NULL);
	original = pointer;
	while (*s1)
	{
		*pointer = *s1;
		pointer++;
		s1++;
	}
	while (*s2)
	{
		*pointer = *s2;
		pointer++;
		s2++;
	}
	*pointer = 0;
	return (original);
}
/*
s1: La primera string.
s2: La string a añadir a ’s1’.
*/
