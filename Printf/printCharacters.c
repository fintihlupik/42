/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printCharacters.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pterekho <pterekho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 17:41:38 by pterekho          #+#    #+#             */
/*   Updated: 2023/06/05 19:52:28 by pterekho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_char(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_print_string(char *str)
{
	int	i;

	i = 0;
	if (!str)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (*(str + i))
	{
		write(1, &(*(str + i)), 1);
		i++;
	}
	return (i);
}
