/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pterekho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 17:27:14 by pterekho          #+#    #+#             */
/*   Updated: 2022/10/26 15:25:09 by pterekho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*original;
	char	*to_find;
	size_t	i;
	size_t	j;

	original = (char *)haystack;
	to_find = (char *)needle;
	i = 0;
	if (ft_strlen(to_find) == 0)
		return (original);
	while (i < len && *(original + i))
	{
		j = 0;
		while (*(original + i + j)
			== *(to_find + j) && (i + j) < len && *(original + i + j)
			&& *(to_find + j))
			j++;
		if (*(to_find + j) == 0)
			return (original + i);
		i++;
	}
	return (NULL);
}
/*
The strnstr() function locates the first occurrence of the null-terminated string
needle in the string haystack, where not more than len characters are searched.
Characters that appear after a `\0' character are not searched.
*/
