/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printNumbers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pterekho <pterekho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 17:41:51 by pterekho          #+#    #+#             */
/*   Updated: 2023/06/05 19:58:42 by pterekho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int	length;

	length = 0;
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (n < 0)
	{
		length += ft_print_char('-');
		n = -n;
	}
	if (n <= 9)
		length += ft_print_char(n + '0');
	else
	{
		length += ft_putnbr(n / 10);
		length += ft_print_char((n % 10) + '0');
	}
	return (length);
}

int	ft_print_unsigned(unsigned int n)
{
	int	length;

	length = 0;
	if (n <= 9)
		length += ft_print_char(n + '0');
	else
	{
		length += ft_print_unsigned(n / 10);
		length += ft_print_char((n % 10) + '0');
	}
	return (length);
}
