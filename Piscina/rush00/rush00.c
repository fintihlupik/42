/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pterekho <pterekho@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 15:01:33 by pterekho          #+#    #+#             */
/*   Updated: 2022/08/14 16:19:23 by pterekho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	c;
	int	r;

	c = 1;
	r = 1;
	while (r <= y)
	{
		while (c <= x)
		{
			if ((r == 1 || r == y) && (c == 1 || c == x))
				ft_putchar('o');
			else if (r == 1 || r == y)
				ft_putchar('-');
			else if (c == 1 || c == x)
				ft_putchar('|');
			else
				ft_putchar(' ');
			c++;
		}	
		if (x > 0)
			ft_putchar('\n');
		r++;
		c = 1;
	}
}
