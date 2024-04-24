/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pterekho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 19:24:48 by pterekho          #+#    #+#             */
/*   Updated: 2022/08/31 22:01:17 by pterekho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int 	ft_ultimate_range(int **range, int min, int max)
{
	int *memory;
	int i;

	i = 0;
	if (min >= max)
	{
	range = NULL;
	return (0);
	}
	memory = malloc((max - min) * sizeof(int));
	if (memory == 0)
		return (-1);
	*range = memory;
	while (max >= min)
	{
		memory[i] = min;
		min++;
		i++;
	}
	return (max - min);
}

int main(void)
{
 int **pointer;
 pointer = 0;
 ft_ultimate_range(pointer, 1, 4);
 printf("%d\n", pointer[0][1]);
}
