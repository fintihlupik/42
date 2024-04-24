/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pterekho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 12:15:40 by pterekho          #+#    #+#             */
/*   Updated: 2022/08/24 00:13:05 by pterekho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
	dest[i] = '\0';
	i++;
	}
	return (dest);
}
/*
int main(void)
{
	char dest [8] = "world!!";
	char src [6] = "Hello";
//	he añadido al while *src ! = '\0' para controlar el caso en que n > src.length


	char *result = ft_strncpy (dest, src, 2);




//strncpy(hello, world, 7);
printf("Cadena copiada es: %s \n", result);
}*/
