/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pterekho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 16:52:09 by pterekho          #+#    #+#             */
/*   Updated: 2022/10/26 14:25:42 by pterekho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (dst <= src)
		ft_memcpy(dst, src, len);
	else
	{
		while (len-- > 0)
			*((char *)(dst + len)) = *((char *)(src + len));
	}
	return (dst);
}
/*
 The memmove() function copies len bytes from string src to string dst.  The two
 strings may overlap; the copy is always done in a non-destructive manner.*/
