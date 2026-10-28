/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelberka <aelberka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 23:09:56 by aelberka          #+#    #+#             */
/*   Updated: 2026/10/27 21:11:15 by aelberka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}

//#include <stdio.h>
//int main (void)
//{
//	t_list *list;
//	list = NULL; // empty list;
//	ft_lstadd_back(&list , ft_lstnew("hello"));
//	ft_lstadd_back(&list , ft_lstnew("3333"));
//	ft_lstadd_back(&list , ft_lstnew("hedwdwllo"));
//	while(list)
//	{
//		printf("%s\n" ,(char *)list->content);
//		list = list->next;
//	}
//	return 0;
//}
