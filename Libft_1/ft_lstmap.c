/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pterekho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 19:40:15 by pterekho          #+#    #+#             */
/*   Updated: 2022/10/24 19:36:13 by pterekho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*to_check;

	if (!lst || !f)
		return (NULL);
	new = NULL;
	while (lst)
	{
		to_check = ft_lstnew(f(lst->content));
		if (!to_check)
		{
			ft_lstclear(&lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new, to_check);
		lst = lst->next;
	}
	return (new);
}
