/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pterekho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 20:07:35 by pterekho          #+#    #+#             */
/*   Updated: 2022/10/26 14:26:16 by pterekho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*original;

	original = b;
	i = 0;
	while (i < len)
	{
		*original = (unsigned char) c;
		i++;
		original++;
	}
	return (b);
}
/*
  The memset() function writes len bytes
  of value c (converted to an unsigned char) to
     the string b. */
