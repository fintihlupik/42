/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pterekho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 19:04:46 by pterekho          #+#    #+#             */
/*   Updated: 2022/10/26 15:35:26 by pterekho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*pointer;
	int		i;

	i = 0;
	pointer = malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (!pointer || !s1)
		return (NULL);
	while (*(s1 + i))
	{
		*(pointer + i) = *(s1 + i);
		i++;
	}
	*(pointer + i) = 0;
	return (pointer);
}
/*
The strdup() function allocates sufficient memory for a copy of the string s1,
does the copy, and returns a pointer to it.
*/
