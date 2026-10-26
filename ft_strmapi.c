/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelberka <aelberka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 04:03:09 by aelberka          #+#    #+#             */
/*   Updated: 2026/10/25 18:13:29 by aelberka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	size_t	i;
	char	*m;

	if (!s || !f)
		return (NULL);
	i = 0;
	len = ft_strlen(s);
	m = malloc(len + 1);
	if (!m)
		return (NULL);
	while (i < len)
	{
		m[i] = f((unsigned int)i, s[i]);
		i++;
	}
	m[i] = '\0';
	return (m);
}


char f(unsigned int i , char c)
{
	if(i % 2 != 0)
	{
		c = c - 32;
	}
	return (c);
}

#include <stdio.h>

int main (void)
{
	char s[] = "adnan";
	char *m;
	m = ft_strmapi(s , f);
	printf("%s" , m);
	return 0;
}
