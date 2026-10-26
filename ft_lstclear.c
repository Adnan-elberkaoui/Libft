/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelberka <aelberka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 23:45:36 by aelberka          #+#    #+#             */
/*   Updated: 2026/10/25 23:59:44 by aelberka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *list;
	t_list	*next;
	
	if(!lst || !del)
		return ;
	list = *lst;
	while (list)
	{
		ft_lstdelone(list, del);
		next = list->next;
	}
}
