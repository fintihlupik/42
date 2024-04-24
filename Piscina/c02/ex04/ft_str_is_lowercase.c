/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pterekho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 17:36:08 by pterekho          #+#    #+#             */
/*   Updated: 2022/08/22 12:31:46 by pterekho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	while (*str != '\0')
	{
		if (*str < 'a' || *str > 'z')
			return (0);
		str++;
	}
	return (1);
}
/*
int main(void)
{
	char raro[] = "678gh";
	char ok[] = "abcd";

	printf("result %d\n", ft_str_is_lowercase(raro));
	printf("result %d\n", ft_str_is_lowercase(ok));

}*/
