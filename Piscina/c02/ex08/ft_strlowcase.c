/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pterekho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 10:05:04 by pterekho          #+#    #+#             */
/*   Updated: 2022/08/22 13:57:21 by pterekho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	char	*pointer_initial;

	pointer_initial = str;
	while (*str != '\0')
	{
		if (*str > 64 && *str < 91)
		*str = *str + 32;
		str++;
	}
	return (pointer_initial);
}

/*
int main(void)
{
	char abc[] = "ABC";
	ft_strlowcase(abc);

	char abcd[] = "AbcD980";
	ft_strlowcase(abcd);

	printf("El nuevo es  %s\n", ft_strlowcase(abc));
	printf("El nuevo es  %s\n", ft_strlowcase(abcd));
}*/
