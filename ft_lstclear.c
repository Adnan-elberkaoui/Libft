/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelberka <aelberka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 23:45:36 by aelberka          #+#    #+#             */
/*   Updated: 2026/10/29 17:15:11 by aelberka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// valgrind ./a.out
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*list;
	t_list	*next;
	
	if (!lst || !del)
		return ;
	list = *lst;
	while (list)
	{
		next = list;
		list = list->next;
		ft_lstdelone(next, del);
	}
	*lst = NULL;
}

//void	del(void *content)
//{
//	free(content);
//}

//#include <stdio.h>
//int main (void)
//{
//	t_list *list;
//	list = NULL; // empty list;
//	ft_lstadd_back(&list , ft_lstnew("adnan"));
//	ft_lstadd_back(&list , ft_lstnew("adnan"));
//	ft_lstadd_back(&list , ft_lstnew("adnan"));
	
//	ft_lstclear(&list , del);
//	return 0;
//}
