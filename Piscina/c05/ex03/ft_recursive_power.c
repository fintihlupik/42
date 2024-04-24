/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pterekho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 20:42:46 by pterekho          #+#    #+#             */
/*   Updated: 2022/09/01 14:56:05 by pterekho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	i;

	i = 1;
	if (power < 0)
		return (0);
	else if (nb == 0 && power == 0)
		return (1);
	if (power == 0)
		return (1);
	return (i * nb * ft_recursive_power(nb, power - 1));
}
/*
int main(void)
{
	printf("%d\n", ft_recursive_power(4, 4));
}*/
