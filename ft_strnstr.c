/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelberka <aelberka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 19:05:34 by aelberka          #+#    #+#             */
/*   Updated: 2026/10/20 22:28:55 by aelberka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if(!big  || !little )
		return (NULL);
		
	if (little[0] == '\0')
		return ((char *)big);
	while (i < len && big[i])
	{
		j = 0;
		while (little[j] && big[j + i] == little[j] && i + j < len)
		{
			j++;
		}
		if (little[j] == '\0')
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}

#include <stdio.h>

int	main(void)
{
	char str1[] = "adnan 1234";
	char *str;
	str = NULL;
	
	char *str3;
	str3 = ft_strnstr(str, str1, 10);
	printf("%s", str3);
}