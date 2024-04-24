/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pterekho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 15:04:23 by pterekho          #+#    #+#             */
/*   Updated: 2022/08/31 21:52:02 by pterekho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*memory;
	int	i;

	i = 0;
	memory = malloc((max - min) * sizeof(int));
	if (memory == 0)
		return (0);
	while (min < max)
	{
		memory[i] = min;
		min++;
		i++;
	}
	return (memory);
}
/*
int main (void)
{
	int *pointer;
	pointer = ft_range(0, 3);
	printf("%d\n", pointer[0]);
	printf("%d\n", pointer[1]);
	printf("%d\n", pointer[2]);
}*/
