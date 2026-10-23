/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelberka <aelberka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 14:34:46 by aelberka          #+#    #+#             */
/*   Updated: 2026/10/19 15:26:42 by aelberka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;
	size_t	originallendst;

	originallendst = ft_strlen(dst);
	len = ft_strlen(dst);
	i = 0;
	if (size <= len)
		return (size + ft_strlen(src));
	while (i < size - len - 1 && src[i])
	{
		dst[len] = src[i];
		len++;
		i++;
	}
	dst[len] = '\0';
	return (originallendst + ft_strlen(src));
}
