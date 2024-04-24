/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pterekho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 11:36:07 by pterekho          #+#    #+#             */
/*   Updated: 2022/08/31 12:08:04 by pterekho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_sqrt(int nb)
{
	int	i;

	if (nb < 0)
		return (0);
	if (nb <= 1)
		return (nb);
	if (nb > 1)
	{
		i = 2;
		while (i * i <= nb)
		{
			if (i * i == nb)
				return (i);
			i++;
		}
	}
	return (0);
}
/*
int main(void)
{
	printf("%u\n", ft_sqrt(9));
	printf("%u\n", ft_sqrt(-9));
	printf("%u\n", ft_sqrt(0));
	printf("%u\n", ft_sqrt(15));
}
*/
