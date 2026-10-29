/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelberka <aelberka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 03:55:33 by aelberka          #+#    #+#             */
/*   Updated: 2026/10/29 17:25:21 by aelberka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if(!s && fd < 0)
		return;
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}

//int main (void)
//{
//	int fd;

//	fd = 2;
//	ft_putendl_fd("adnan" , fd);
//}


//fd  howa non nigative values li kipresonte wahed lfille;