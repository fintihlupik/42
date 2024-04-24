/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pterekho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 18:16:32 by pterekho          #+#    #+#             */
/*   Updated: 2022/08/22 12:32:48 by pterekho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if (*str < ' ' || *str > '~')
			return (0);
		str++;
	}
	return (1);
}
/*
int main(void)
{
	char impr[] = "???dhjgdjhg:";
	char noimp[] = "Ñ";
	char empty[6];

	printf("REsultado: , %d\n", ft_str_is_printable(impr));
	printf("REsultado: , %d\n", ft_str_is_printable(noimp));
	printf("REsultado: , %d\n", ft_str_is_printable(empty));
}*/
