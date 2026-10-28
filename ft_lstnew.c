/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelberka <aelberka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 18:17:03 by aelberka          #+#    #+#             */
/*   Updated: 2026/10/27 18:40:35 by aelberka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//typedef struct s_list
//{
//	void			*content;
//	struct s_list	*next;

//}					t_list;

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

//#include <stdio.h>

//int main (void)
//{
//	int p = 23;
//	t_list *node;
//	node = ft_lstnew(&p);

//	printf("%d" , *(int *)node->content);
//	return 0;
//}
