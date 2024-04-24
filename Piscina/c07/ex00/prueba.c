/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pterekho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 14:24:25 by pterekho          #+#    #+#             */
/*   Updated: 2022/09/24 16:21:00 by pterekho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strdup(char *src)
{
	char	*memory;
	char	*aux;
	int		letters;
	int i;

	i = 0;
	letters = 1;
	memory = (char *) malloc(sizeof(char));
	/*if (memory == 0)
		return (0);
	original = memory;*/
	while (*src != 0)
	{
		//free(memory);
		//memory = (char *) malloc(sizeof(char) * letters);
		*(memory + i) = *src;
		src++;
		i++;
		letters++;

	
		aux = (char *) malloc(sizeof(char) * letters);
		memcpy(aux, memory, sizeof(char) * (letters -1));
		free(memory);// no pq asi borro el signif, hay que hacer swap creando otro puntero, guardando el significado etc
		memory = aux;


	}

	/*free(memory);
	memory = (char *) malloc(sizeof(char) * letters);*/
	*(memory + i) = 0;
	return (memory);
}

int main(void)
{
	char array[] = "Hello";
	printf("%s\n", ft_strdup(array));
}
