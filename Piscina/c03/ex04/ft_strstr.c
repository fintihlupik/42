/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prueba04.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pterekho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 08:51:24 by pterekho          #+#    #+#             */
/*   Updated: 2022/08/30 10:26:19 by pterekho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>*/

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (*to_find == 0)
		return (str);
	while (str[i] != 0)
	{
		j = 0;
		while (str[i + j] == to_find[j] && str[i + j] != 0)
		j++;
		if (to_find[j] == 0)
			return (str + i);
		i++;
	}
	return (0);
}
/*
int main(void)
{
	char str[] = "123467834589";
	char to_find[] = "345";
	printf("%s\n", ft_strstr(str, to_find));
}*/
