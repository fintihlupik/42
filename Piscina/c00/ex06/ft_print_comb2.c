/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pterekho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 20:30:52 by pterekho          #+#    #+#             */
/*   Updated: 2022/08/15 00:04:00 by pterekho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_numbers(int first, int second)
{
	char	character;

	character = first / 10 + '0';
	write (1, &character, 1);
	character = first % 10 + '0';
	write (1, &character, 1);
	write (1, " ", 1);
	character = second / 10 + '0';
	write (1, &character, 1);
	character = second % 10 + '0';
	write (1, &character, 1);
}

void	ft_print_comb2(void)
{
	int	first;
	int	second;

	first = 0;
	while (first <= 98)
	{	
		second = first + 1;
		while (second <= 99)
		{
			print_numbers (first, second);
			if (first == 98 && second == 99)
			{
				break ;
			}
			else
			{
				write (1, ", ", 2);
			}		
			second ++;
		}
		first++;
	}
}
