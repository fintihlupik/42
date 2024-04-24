/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pterekho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 17:14:12 by pterekho          #+#    #+#             */
/*   Updated: 2022/08/18 17:51:48 by pterekho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temporal;

	temporal = *a;
	*a = *b;
	*b = temporal;
}

/*
int main (void)
{
	int *a;
	int *b;
	int intA;
	int intB;

intA=5;
intB=3;

a = &intA;
b = &intB;

//ft_swap (a, b);
printf("El valor de a por defecto era  %d\n",intA); 
printf("El valor de b por defecto era  %d\n",intB);
ft_swap(a, b);
printf("El valor de a es  %d\n",intA); 
printf("El valor de b es  %d\n",intB);

}
*/
