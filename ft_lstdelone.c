/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelberka <aelberka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 23:35:49 by aelberka          #+#    #+#             */
/*   Updated: 2026/10/28 04:12:52 by aelberka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

static void  del(void *content)
{
	free(content);
}
#include <stdio.h>

//int main (void)
//{
//	int *p;
//	t_list *node;
//	p = malloc(sizeof(int));
//	*p = 23;
//	node = ft_lstnew(p);

//	ft_lstdelone(node , del);
//	return 0;
//}
