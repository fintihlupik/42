/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pterekho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 19:01:49 by pterekho          #+#    #+#             */
/*   Updated: 2022/10/26 15:30:29 by pterekho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

void	*ft_calloc(size_t nelem, size_t elsize)
{
	unsigned char	*pointer;

	if (nelem == SIZE_MAX || elsize == SIZE_MAX)
		return (NULL);
	pointer = malloc (nelem * elsize);
	if (!pointer)
		return (NULL);
	ft_bzero(pointer, elsize * nelem);
	return (pointer);
}
/*
The calloc() function contiguously allocates enough space for count
objects that are size bytes of memory each and returns a pointer to the
allocated memory.  The allocated memory is filled with bytes of value zero.
*/
