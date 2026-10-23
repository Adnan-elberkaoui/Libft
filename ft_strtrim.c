/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelberka <aelberka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 23:39:42 by aelberka          #+#    #+#             */
/*   Updated: 2026/10/21 10:00:56 by aelberka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char *m;
	
	i = 0;
	while(s1[i])
	{
		j = 0;
		while(set[j])
		{
			if(s1[i] == set[j])
				i++;
			j++;
		}
		i++;
	}
	
}
