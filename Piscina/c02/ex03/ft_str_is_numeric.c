/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pterekho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 15:32:31 by pterekho          #+#    #+#             */
/*   Updated: 2022/08/22 08:31:21 by pterekho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	while (*str != '\0')
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}
/*
int main(void)
{
	char numbers[3] = "02";
	char letters[4] = "a2b";
	char empty[3];
	char spaced[5] = "2 3 ";

	printf("Resultado : %d\n", ft_str_is_numeric(numbers));
	printf("Resultado : %d\n", ft_str_is_numeric(letters));
	printf("Resultado : %d\n", ft_str_is_numeric(empty));
	printf("Resultado : %d\n", ft_str_is_numeric(spaced));

}*/
