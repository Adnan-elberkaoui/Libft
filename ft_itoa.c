/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelberka <aelberka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 11:27:59 by aelberka          #+#    #+#             */
/*   Updated: 2026/10/30 09:30:54 by aelberka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	checklen(long *nb, size_t *len)
{
	long	n;

	n = *nb;
	if (*nb == 0)
	{
		*len = 1;
		return ;
	}
	if (*nb < 0)
	{
		*nb = -(*nb);
		n = -n;
		*len = 1;
	}
	while (n > 0)
	{
		n /= 10;
		(*len)++;
	}
}

char	*ft_itoa(int n)
{
	char	*m;
	size_t	len;
	long	nb;

	nb = n;
	len = 0;
	checklen(&nb, &len);
	m = malloc(len + 1);
	if (!m)
		return (NULL);
	m[len] = '\0';
	while (len > (n < 0))
	{
		len--;
		m[len] = (nb % 10) + '0';
		nb /= 10;
	}
	if (n < 0)
		m[0] = '-';
	return (m);
}
