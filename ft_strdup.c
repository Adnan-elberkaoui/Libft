/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelberka <aelberka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 09:25:03 by aelberka          #+#    #+#             */
/*   Updated: 2026/10/30 09:30:13 by aelberka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*m;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	m = malloc((len + 1) * sizeof(char));
	if (!m)
		return (NULL);
	ft_strlcpy(m, s, len + 1);
	return (m);
}
