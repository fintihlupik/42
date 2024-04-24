/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pterekho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 15:56:10 by pterekho          #+#    #+#             */
/*   Updated: 2022/08/18 19:04:28 by pterekho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (*str != '\0')
	{
		length ++;
		str ++;
	}
	return (length);
}

/*
int main(void)
{
	char hello[6] = "Hello";
	char *str;
	int longitud;

	str = &hello[0];
	longitud = ft_strlen(str);
	printf("La longitud es de %d.\n", longitud);
}*/
