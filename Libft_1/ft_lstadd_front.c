/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pterekho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 17:47:24 by pterekho          #+#    #+#             */
/*   Updated: 2022/10/24 19:19:31 by pterekho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
/*
int main(void)
{
    t_list *lst = ft_lstnew("Lista 1");
    t_list *lst2 = ft_lstnew("Lista 2");
    t_list *lst3 = ft_lstnew("Lista 3");
    //ft_lstadd_front(&lst, lst2);
    ft_lstadd_front(&lst, lst3);
    printf("%s\n", lst->content);
    //ft_lstlast(lst);
    //printf("%s\n", lst->content);
    return (0);
}*/
