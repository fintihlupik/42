/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pterekho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 14:44:14 by pterekho          #+#    #+#             */
/*   Updated: 2022/10/27 20:26:50 by pterekho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*new_string;
	unsigned int	i;

	if (!s)
		return (NULL);
	new_string = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!new_string)
		return (NULL);
	i = 0;
	while (*(s + i))
	{
		*(new_string + i) = f(i,*(s + i));
		i++;
	}
	*(new_string + i) = 0;
	return (new_string);
}
/*
s: La string que iterar.
f: La función a aplicar sobre cada carácter.
*/
