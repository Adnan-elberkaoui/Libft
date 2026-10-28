/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelberka <aelberka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 23:09:07 by aelberka          #+#    #+#             */
/*   Updated: 2026/10/28 03:52:45 by aelberka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new) // pointer adress dial heal dia linked list;
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}


int main (void)
{
	t_list *list;
	list = NULL; // empty list;
	ft_lstadd_front(&list , ft_lstnew("hello"));
	ft_lstadd_front(&list , ft_lstnew("3333"));
	ft_lstadd_front(&list , ft_lstnew("hedwdwllo"));
	while(list)
	{
		printf("%s\n" ,(char *)list->content);
		list = list->next;
	}
	return 0;
}

