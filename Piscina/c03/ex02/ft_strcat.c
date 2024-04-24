/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pterekho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 10:42:11 by pterekho          #+#    #+#             */
/*   Updated: 2022/08/24 11:58:42 by pterekho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <string.h>
*/
char	*ft_strcat(char *dest, char *src)
{
	char	*pointer_init;

	pointer_init = dest;
	while (*dest != '\0')
	{
	dest++;
	}
	while (*src != '\0')
	{
	*dest = *src;
	dest++;
	src++;
	}
	*dest = '\0';
	return (pointer_init);
}

/*
int main(void)
{
char una[100] = "una";
char palabra[] = "palabra";
//printf("%s\n", strcat (una, palabra));
ft_strcat(una, palabra);
printf("%s\n", una);
}
*/
