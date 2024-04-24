/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pterekho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 09:48:33 by pterekho          #+#    #+#             */
/*   Updated: 2022/08/25 14:19:10 by pterekho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>*/

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (s1 < (s1 + n) && (*s1 != '\0' || *s2 != '\0'))
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
		n--;
	}
	return (0);
}
/*
int main (void)
{
	char abcd[] = "abcd";
	char aBcd[] = "abcdguygou";
	char abcD[] = "abcD";
	char abCd[] = "abCd";

	printf("%d\n",ft_strncmp(abcd,aBcd,8));
	printf("%d\n",ft_strncmp(abcD,abcd,3));
	printf("%d\n",ft_strncmp(abCd,abcd,3));
	printf("%d\n",ft_strncmp(abcd,abcd,3));

printf("%s\n", "viene la ORIGINAL");
	printf("%d\n",strncmp(abcd,aBcd,8));
	printf("%d\n",strncmp(abcD,abcd,3));
	printf("%d\n",strncmp(abCd,abcd,3));
	printf("%d\n",strncmp(abcd,abcd,3));



}*/
