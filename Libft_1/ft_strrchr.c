/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pterekho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 13:25:37 by pterekho          #+#    #+#             */
/*   Updated: 2022/10/26 14:51:05 by pterekho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	length;
	char	*str;

	str = (char *) s;
	length = ft_strlen(str);
	while (length)
	{
		if (*(str + length) == (char)c)
			return (str + length);
		length--;
	}
	if (*(str + length) == (char)c)
		return (str + length);
	return (NULL);
}
/*The strrchr() function is identical to strchr(), except it locates 
the last occurrence of c.*/
