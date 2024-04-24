/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pterekho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 13:27:42 by pterekho          #+#    #+#             */
/*   Updated: 2022/10/24 19:21:05 by pterekho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	if (!lst->next)
		return (lst);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
/*
int main(void)
{
    t_list *lst = ft_lstnew("Lista 1");
    t_list *lst2 = ft_lstnew("Lista 2");
    t_list *lst3 = ft_lstnew("Lista 3");
    t_list *result;
    ft_lstadd_front(&lst, lst2);
    ft_lstadd_front(&lst, lst3);
    printf("%s\n", lst->content);
    result = ft_lstlast(lst);
    printf("%s\n", result->content);
    return (0);
}*/
