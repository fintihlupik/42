/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pterekho <pterekho@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 16:43:03 by pterekho          #+#    #+#             */
/*   Updated: 2022/08/14 15:32:13 by pterekho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
			if ((c == 1 && r == 1) || ((y > 1 && x > 1) && (c == x && r == y)))
				ft_putchar('/');
			else if ((r == 1 && c == x) || (r == y && c == 1))
				ft_putchar('\\');
			else if (r == 1 || c == 1 || r == y || c == x)
				ft_putchar('*');
			else
				ft_putchar(' ');
		c++;
		}
		if (x > 0)
			ft_putchar ('\n');
		c = 1;
		r++;
	}
}
