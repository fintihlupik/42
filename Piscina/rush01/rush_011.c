/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_011.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pterekho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 16:40:00 by pterekho          #+#    #+#             */
/*   Updated: 2022/08/21 18:12:34 by pterekho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int main (int ac, char *argv[])
{
	int i;
	int j;
	int arg_array[16];

	i = 0;
	j = 0;
	if (ac == 2)
	{
		while (argv[1][i] != '\0')
		{	
			if (argv[1][i] >= '1' && argv[1][i] <= '4')
			{
				arg_array[j] = argv[1][i] - '0';
				j++;
			}
			i++;
		}
		
	   if (j != 15)
	   	write (1, "!", 1);
		else 
		write (1, "ok", 2);
				
		printf ("La j es igual a %d\n", j); 
		write (1, &arg_array[0], 1);
		write (1, &arg_array[1], 1);
		write (1, &arg_array[2], 1);
		write (1, &arg_array[3], 1);


	}
}
