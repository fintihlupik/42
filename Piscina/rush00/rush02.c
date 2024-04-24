/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pterekho <pterekho@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 14:00:21 by pterekho          #+#    #+#             */
/*   Updated: 2022/08/14 16:26:42 by pterekho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	r;
	int	c;

	r = 1;
	c = 1;
	while (r <= y)
	{
		while (c <= x)
		{
			if ((r == 1) && (c == 1 || c == x))
				ft_putchar ('A');
			else if ((r == y) && (c == 1 || c == x))
				ft_putchar ('C');
			else if (r == 1 || r == y || c == 1 || c == x)
				ft_putchar ('B');
			else
				ft_putchar (' ');
			c++;
		}
		if (x > 0)
			ft_putchar ('\n');
		c = 1;
		r++;
	}
}
