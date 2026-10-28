/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelberka <aelberka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 14:16:04 by aelberka          #+#    #+#             */
/*   Updated: 2026/10/28 04:55:34 by aelberka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	void	*content;
	t_list	*new_lst;
	t_list	*node;

	if (!lst || !f || !del)
		return (NULL);
	new_lst = NULL;
	while (lst)
	{
		content = f(lst->content);
		node = ft_lstnew(content);
		if (!node)
		{
			del(content);
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, node);
		lst = lst->next;
	}
	return (new_lst);
}

void	*ft_tolower(void *c)
{
	char	*p;
	int		i;

	p = (char *)c;
	i = 0;
	while (p[i])
	{
		if (p[i] >= 'a' && p[i] <= 'z')
			p[i] += 32;
		i++;
	}
	return ((void *)p);
}

int	main(void)
{
	t_list *list;
	list = NULL; // empty list;
	ft_lstadd_front(&list, ft_lstnew("hello"));
	ft_lstadd_front(&list, ft_lstnew("3333"));
	ft_lstadd_front(&list, ft_lstnew("hedwdwllo"));

	while (list)
	{
		printf("%s\n", (char *)list->content);
		list = list->next;
	}

	t_list *list2 = ft_lstmap(list , ft_tolower , &free);

	while (list2)
	{
		printf("%s\n", (char *)list2->content);
		list2 = list2->next;
	}
}