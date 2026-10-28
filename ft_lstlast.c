/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelberka <aelberka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 23:08:58 by aelberka          #+#    #+#             */
/*   Updated: 2026/10/27 18:47:34 by aelberka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
	if(!lst)
		return (NULL);
	
	while(lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}


//int main (void)
//{
//	t_list *list;
//	list = NULL; // empty list;
//	ft_lstadd_front(&list , ft_lstnew("hello"));
//	ft_lstadd_front(&list , ft_lstnew("3333"));
//	ft_lstadd_front(&list , ft_lstnew("hedwdwllo"));
	
//	printf("%s\n" ,(char*)ft_lstlast(list)->content);
//	return 0;
//}
