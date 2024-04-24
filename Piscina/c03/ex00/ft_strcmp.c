/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pterekho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 01:03:53 by pterekho          #+#    #+#             */
/*   Updated: 2022/08/24 01:04:03 by pterekho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (0);
}
/*
int main(void)
{
	
	//printf("%d\n",ft_strcmp("abcd","abCd"));
	//printf("%d\n",ft_strcmp("abcd","abcd"));
	//printf("%d\n",ft_strcmp("abCd","abcd"));

	char str[] = "abcdPugvygviygbuh";
	char abcd[] = "abcd";

	printf("%d\n", strcmp(str, abcd));
	printf("%d\n", ft_strcmp(str, abcd));

//	printf("%d\n", strcmp("abcd", "abcde"));
//	printf("%d\n", ft_strcmp("abcd", "abcde"));

}*/
