/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pterekho <pterekho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 11:21:02 by pterekho          #+#    #+#             */
/*   Updated: 2023/06/07 17:52:30 by pterekho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int	format(va_list args, const char letter)
{
	if (letter == '%')
		return (ft_print_char('%'));
	else if (letter == 'c')
		return (ft_print_char(va_arg(args, int)));
	else if (letter == 's')
		return (ft_print_string(va_arg(args, char *)));
	else if (letter == 'd' || letter == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (letter == 'u')
		return (ft_print_unsigned(va_arg(args, unsigned int)));
	else if (letter == 'x')
		return (ft_print_hex(va_arg(args, unsigned int), 'a'));
	else if (letter == 'X')
		return (ft_print_hex(va_arg(args, unsigned int), 'A'));
	else if (letter == 'p')
		return (ft_print_pointer(va_arg(args, void *)));
	return (1);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		total_length;

	total_length = 0;
	va_start(args, str);
	if (!str)
		return (-1);
	while (*str)
	{
		if (*str == '%')
		{
			total_length += format(args, *(str + 1));
			str++;
		}
		else
			total_length += ft_print_char(*str);
			str++;
	}
	va_end(args);
	return (total_length);
}
