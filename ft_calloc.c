/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelberka <aelberka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 12:20:09 by aelberka          #+#    #+#             */
/*   Updated: 2026/10/28 21:44:35 by aelberka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;

	if(	count == 0 || size == 0)
		return (malloc(1));
	if (count > SIZE_MAX / size)
		return (NULL);
	p = malloc(count * size);
	if (!p) 
		return (NULL);
	ft_bzero(p, count * size);
	return (p);
}
