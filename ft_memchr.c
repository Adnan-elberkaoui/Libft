/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelberka <aelberka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 17:35:19 by aelberka          #+#    #+#             */
/*   Updated: 2026/10/19 17:48:55 by aelberka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*d;
	size_t				i;

	d = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (d[i] == (unsigned char)c)
			return ((unsigned char *)&d[i]);
		i++;
	}
	return (NULL);
}
