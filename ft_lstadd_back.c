/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelberka <aelberka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 23:09:56 by aelberka          #+#    #+#             */
/*   Updated: 2026/10/26 14:46:49 by aelberka         ###   ########.fr       */
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


#include <stdio.h>

void 	ft_link(t_list *node1, t_list *node2)
{
	node1->next = node2;
}
int	main(void)
{
	int p1 = 10;
	int p2 = 11;
	int p3 = 12;
	int p4 = 13;

	int new = 55;
	
	t_list *node1 = ft_lstnew(&p1);
	t_list *node2 = ft_lstnew(&p2);
	t_list *node3 = ft_lstnew(&p3);
	t_list *node4 = ft_lstnew(&p4);
	t_list *node5 = ft_lstnew(&new);
	
	ft_link(node1 , node2);
	ft_link(node2 , node3);
	ft_link(node3 , node4);
	
	ft_lstadd_back(&node1 , node5);
	
	while(node1)
	{
		printf("%d\n" , *(int*)node1->content);
		node1 = node1->next;
	}
}
