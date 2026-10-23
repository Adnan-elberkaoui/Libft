/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelberka <aelberka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 13:32:01 by aelberka          #+#    #+#             */
/*   Updated: 2026/10/21 10:53:23 by aelberka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*m;
	size_t	slen;

	if (!s)
		return (NULL);
	slen = (ft_strlen(s));
	if (start >= slen)
	{
		m = malloc(1);
		if (!m)
			return (NULL);
		m[0] = '\0';
		return (m);
	}
	if (len >= slen - start)
		len = slen - start;
	m = malloc((len + 1) * sizeof(char));
	if (!m)
		return (NULL);
	ft_strlcpy(m, &s[start], len + 1);
	return (m);
}

#include <stdio.h>

int	main(void)
{
	char	str[] = "hello word";
	char	*p;

	p = ft_substr(str, 10, 3);
	printf("%s", p);
	free(p);
}
