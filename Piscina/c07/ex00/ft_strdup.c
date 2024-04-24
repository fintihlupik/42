/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pterekho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 14:24:25 by pterekho          #+#    #+#             */
/*   Updated: 2022/08/31 21:49:36 by pterekho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*memory;
	char	*original;

	memory = malloc(sizeof(src));
	if (memory == 0)
		return (0);
	original = memory;
	while (*src != 0)
	{
		*memory = *src;
		src++;
		memory++;
	}
	*memory = 0;
	return (original);
}
/*
int main(void)
{
	char array[] = "Hello";
	printf("%s\n", ft_strdup(array));
}*/
