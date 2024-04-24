/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pterekho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 20:43:42 by pterekho          #+#    #+#             */
/*   Updated: 2022/08/18 18:11:16 by pterekho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
int main(void)
{
	int a;
	int b;
	int *div;
	int *mod;
	int c;
	int d;

	a = 13;
	b = 10;
	c = 0;
	d = 0;

	div = &c;
	mod = &d;
	
	ft_div_mod (a, b, div, mod);	
	printf ("La división da %d.\n", c); 	
	printf ("El resto da %d.\n", d); 

	

}*/
