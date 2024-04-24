/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pterekho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 15:04:51 by pterekho          #+#    #+#             */
/*   Updated: 2022/10/26 15:12:07 by pterekho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;

	str = (char *)s;
	while (n)
	{
		if (*str == (char)c)
			return (str);
		str++;
		n--;
	}
	return (NULL);
}
/*
	The memchr() function locates the first occurrence of c
	(converted to an unsigned char) in string s

	The memchr() function returns a pointer to the byte located,
   	or NULL if no such byte
     exists within n bytes.
*/
