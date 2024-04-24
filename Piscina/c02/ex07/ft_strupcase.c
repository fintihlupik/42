/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pterekho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 19:53:34 by pterekho          #+#    #+#             */
/*   Updated: 2022/08/22 13:53:49 by pterekho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strupcase(char *str)

{	
	char	*pointer_initial;

	pointer_initial = str;
	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
			*str = *str - 32;
		str++;
	}
	return (pointer_initial);
}
/*
int main(void)
{
	char abc[] = "abc";
	char abcd[] = "aBc9";
	//ft_strupcase(abc);
	printf("En mayusculas: %s\n",ft_strupcase(abc));
	//ft_strupcase(abcd);
	printf("En mayusculas: %s\n",ft_strupcase(abcd));
	//printf("El nuevo array: ,%s\n", );
}*/
