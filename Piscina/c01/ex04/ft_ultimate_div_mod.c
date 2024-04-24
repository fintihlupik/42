/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pterekho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 09:34:18 by pterekho          #+#    #+#             */
/*   Updated: 2022/08/18 18:29:38 by pterekho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
}
/*
int main (void)
{
	int int_a;
	int int_b;
	int *p_a;
	int *p_b;

	int_a = 11;
	int_b = 2;
	p_a = &int_a;
	p_b = &int_b;

	ft_ultimate_div_mod (p_a, p_b);

	printf ("el valor de a en el main es %d.\n", *p_a);
	printf ("el valor de b en el main  %d.\n", *p_b);
}*/
