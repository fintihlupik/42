/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prueba.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pterekho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 14:41:00 by pterekho          #+#    #+#             */
/*   Updated: 2022/08/21 14:56:47 by pterekho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if ((*str < 'A' || *str > 'Z') && (*str < 'a' || *str > 'z'))
			return (0);
		str++;
	}
	return (1);
}

/*
int main(void)
{
	char c[2];
	printf("%d\n", ft_str_is_alpha(c));
	char abc9[] = "abc9";
	printf("%d\n", ft_str_is_alpha(abc9));
	char abc[] = "aBc";
	printf("%d\n", ft_str_is_alpha(abc));
}
*/
