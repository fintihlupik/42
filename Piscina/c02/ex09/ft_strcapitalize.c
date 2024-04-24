/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pterekho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 10:41:38 by pterekho          #+#    #+#             */
/*   Updated: 2022/08/23 23:36:31 by pterekho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	letter;

	i = 0;
	letter = 8906078;
	while (str[i] != '\0')
	{
		if ((str[i] > 96 && str[i] < 123) && (i == 0 || letter == 1))
		{
			letter = -7;
			str[i] = str[i] - 32;
		}	
		else if (str[i] > 64 && str[i] < 91 && i != 0 && letter != 1)
				str[i] = str[i] + 32;
		else if ((str[i] >= 32 && str[i] <= 47)
			|| (str[i] >= 58 && str[i] <= 64) || (str[i] >= 91 && str[i] <= 96)
			|| (str[i] >= 123 && str[i] <= 126))
				letter = 1;
		else if (str[i] > 47 && str[i] < 58)
				letter = -9;
		else
				letter = -6967870;
		i++;
	}
	return (str);
}
