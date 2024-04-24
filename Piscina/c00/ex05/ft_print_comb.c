/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pterekho <pterekho@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 20:10:35 by pterekho          #+#    #+#             */
/*   Updated: 2022/09/01 15:00:26 by pterekho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_numbers(char first, char second, char third, char separator_not)
{
	write (1, &first, 1);
	write (1, &second, 1);
	write (1, &third, 1);
	if (separator_not == 'Y')
		write (1, ", ", 2);
}

void	ft_print_comb(void)
{
	char	first;
	char	second;
	char	third;
	char	separator_not;

	first = '0' - 1;
	third = '2';
	separator_not = 'Y';
	while (++first <= '7')
	{	
		second = first + 1;
		third = second + 1;
		if (first == '7')
			separator_not = 'N';
		while (second <= '9')
		{
			while (third <= '9')
			{
				print_numbers(first, second, third, separator_not);
				third++;
			}
	second++;
	third = second + 1;
		}
	}	
}
