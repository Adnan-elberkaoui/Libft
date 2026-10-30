/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelberka <aelberka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 23:21:17 by aelberka          #+#    #+#             */
/*   Updated: 2026/10/30 09:30:11 by aelberka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	len;
	size_t	j;
	char	*m;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	m = malloc(len + 1);
	if (!m)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		m[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
		m[i++] = s2[j++];
	m[i] = '\0';
	return (m);
}
