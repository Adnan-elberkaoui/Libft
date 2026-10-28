/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelberka <aelberka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 23:45:36 by aelberka          #+#    #+#             */
/*   Updated: 2026/10/28 04:28:02 by aelberka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*list;
	t_list	*next;

	if (!lst || !del)
		return ;
	list = *lst;
	while (list)
	{
		ft_lstdelone(list, del);
		next = list->next;
	}
}

//static void	del(void *content)
//{
//	free(content);
//}
#include <stdio.h>

 int	main(void)
{
	t_list	*list;

	list = NULL; // empty list;
	ft_lstadd_front(&list, ft_lstnew("hello"));
	ft_lstadd_front(&list, ft_lstnew("3333"));
	ft_lstadd_front(&list, ft_lstnew("hedwdwllo"));

		while(list)
	{
		printf("%s\n" ,(char *)list->content);
		list = list->next;
	}
	ft_lstclear(&list, &free);
			while(list)
	{
		printf("%s\n" ,(char *)list->content);
		list = list->next;
	}
}

//int	main(void)
//{
//	int	*a;

//	a = malloc(sizeof(int));
//	*a = 5;
//	free(a);
//	printf("%d\n", *a);
//}
