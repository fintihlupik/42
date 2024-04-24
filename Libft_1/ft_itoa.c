/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pterekho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 12:58:28 by pterekho          #+#    #+#             */
/*   Updated: 2022/10/27 20:22:59 by pterekho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(int n)
{
	int	digits;

	digits = 0;
	if (n < 0)
		digits++;
	if (n == 0)
		digits = 1;
	while (n != 0)
	{
		digits++;
		n = n / 10;
	}
	return (digits);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		digits;

	digits = count_digits(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	str = malloc(sizeof(char) * digits + 1);
	if (!str)
		return (NULL);
	*(str + digits) = 0;
	if (n < 0)
		*str = '-';
	if (n == 0)
		*str = '0';
	while (n)
	{
		if (n < 0)
			n = n * (-1);
		digits--;
		*(str + digits) = n % 10 + '0';
		n /= 10;
	}
	return (str);
}
/*
convertir entero a string
*/
