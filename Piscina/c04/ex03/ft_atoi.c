/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pterekho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 21:46:51 by pterekho          #+#    #+#             */
/*   Updated: 2022/08/25 21:54:16 by pterekho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_atoi(char *str)
{
	int	sign;
	int	number;

	sign = 1;
	number = 0;
	while (*str <= 32)
	{
		str++;
	}
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = sign * (-1);
		str++;
	}
	while (*str != '\0' && *str >= '0' && *str <= '9')
	{	
		number = number * 10;
		number = number + (*str - '0');
		str++;
	}
	return (number * sign);
}
/*int main(void)
{
	char string[] = "---+--+1234ab567";
	printf("%d\n", ft_atoi(string));
	return (0);
}*/
