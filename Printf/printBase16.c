/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printBase16.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pterekho <pterekho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 17:41:19 by pterekho          #+#    #+#             */
/*   Updated: 2023/06/07 17:21:09 by pterekho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(unsigned long long n, char minMayusc)
{
	int	length;

	length = 0;
	if (n <= 9)
		length += ft_print_char(n + '0');
	else if (n < 16)
		length += ft_print_char(n - 10 + minMayusc);
	else
	{
		length += ft_print_hex(n / 16, minMayusc);
		length += ft_print_hex(n % 16, minMayusc);
	}
	return (length);
}

int	ft_print_pointer(void *pointer)
{
	int	length;

	length = 0;
	length += write(1, "0x", 2);
	if (!pointer)
		length += write(1, "0", 1);
	else
		length += ft_print_hex((unsigned long long)pointer, 'a');
	return (length);
}
