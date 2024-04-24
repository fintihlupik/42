/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pterekho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 18:23:49 by pterekho          #+#    #+#             */
/*   Updated: 2022/08/31 22:22:18 by pterekho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>*/

void	ft_putnbr(int nbr)
{
	int	number[10];
	int	i;

	i = 0;
	if (nbr == 0)
		write (1, "0", 1);
	if (nbr < 0 && nbr > -2147483648)
	{
		write (1, "-", 1);
		nbr = nbr * (-1);
	}
	if (nbr == -2147483648)
		write (1, "-2147483648", 11);
	while (nbr > 0)
	{
		number[i] = nbr % 10;
		nbr = nbr / 10;
		i++;
	}
	while (i--)
	{	
		number[i] = number[i] + '0';
		write (1, &number[i], 1);
	}
}
/*
int	main(void)
{
	ft_putnbr(2147483647);
}*/
