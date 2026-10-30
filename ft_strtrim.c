/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelberka <aelberka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 23:39:42 by aelberka          #+#    #+#             */
/*   Updated: 2026/10/30 09:34:06 by aelberka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	find_set(char const *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t end;
	size_t start;
	char *s;

	if (!s1 || !set)
		return (NULL);
	end = ft_strlen(s1);
	start = 0;
	while (s1[start] && find_set(set, s1[start]))
		start++;
	while (end > start && find_set(set, s1[end - 1]))
		end--;
	if (start >= end)
	{
		s = malloc(1);
		if (!s)
			return (NULL);
		s[0] = '\0';
		return (s);
	}
	s = malloc(end - start + 1);
	if (!s)
		return (NULL);
	ft_memcpy(s, s1 + start, end - start);
	s[end - start] = '\0';
	return (s);
}