/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cotchetes.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pterekho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 22:34:42 by pterekho          #+#    #+#             */
/*   Updated: 2022/08/25 22:45:04 by pterekho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	counter;
	int				i;

	i = 0;
	counter = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (counter < nb && src[counter] != '\0')
	{
		dest[i] = src[counter];
		i++;
		counter++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int main(void)
{
char hello[] = "Hello";
char world[] = "world";
printf("%s\n",ft_strncat(hello, world,2));
}*/
