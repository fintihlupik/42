/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pterekho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 18:03:34 by pterekho          #+#    #+#             */
/*   Updated: 2022/08/22 12:32:15 by pterekho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	while (*str != 0)
	{
		if (*str < 'A' || *str > 'Z')
			return (0);
	str++;
	}
	return (1);
}
/*
int main(void)
{
	char mal[] = "A87bv";
	char bien[] = "ANBVFDZ";

	printf("Retorno %d\n", ft_str_is_uppercase(mal));
	printf("Retorno %d\n", ft_str_is_uppercase(bien));
}
*/
