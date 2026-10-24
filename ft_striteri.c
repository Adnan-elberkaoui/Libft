/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelberka <aelberka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 14:59:29 by aelberka          #+#    #+#             */
/*   Updated: 2026/10/24 15:20:21 by aelberka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}


void f(unsigned int i , char *c)
{
	if(i % 2 != 0)
	{
		*c = *c - 32;
	}
}

#include <stdio.h>

int main (void)
{
	char s[] = "adnan";
	ft_striteri(s , f);
	printf("%s" , s);
	return 0;
}