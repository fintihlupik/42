/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pterekho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 20:14:16 by pterekho          #+#    #+#             */
/*   Updated: 2022/10/26 14:28:44 by pterekho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize != 0)
	{
		while (src[i] && i < dstsize - 1)
		{
		dst[i] = src[i];
		i++;
		}	
	dst[i] = '\0';
	}
	while (src[i])
		i++;
	return (i);
}
/*
strlcpy() copies up to dstsize - 1 characters from the string src to dst,
NUL-terminating the result if dstsize is not 0.  Like snprintf(3), the strlcpy()
and strlcat() functions return the total length of
the string they tried to create.  For strlcpy() that means the length of src*/
