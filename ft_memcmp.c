/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelberka <aelberka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 17:48:12 by aelberka          #+#    #+#             */
/*   Updated: 2026/10/27 21:40:00 by aelberka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*d1;
	const unsigned char	*d2;

	d1 = (const unsigned char *)s1;
	d2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (d1[i] != d2[i])
			return ((unsigned char)d1[i] - (unsigned char)d2[i]);
		i++;
	}
	return (0);
}

//#include <stdio.h>

//int	main(void)
//{
//	char str[] = "adndw";
//	char str2[] = "adnfw";
//	printf("%d", memcmp(str, str2, 4));
//}