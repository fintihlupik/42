/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pterekho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 19:04:52 by pterekho          #+#    #+#             */
/*   Updated: 2022/08/31 11:30:29 by pterekho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb <= 1)
		return (1);
	if (nb == 0)
		return (0);
	return (nb * ft_recursive_factorial(nb - 1));
}
/*
int main(void)
{
	printf("%d\n", ft_recursive_factorial(12));
}*/
