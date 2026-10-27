/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelberka <aelberka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 03:52:26 by aelberka          #+#    #+#             */
/*   Updated: 2026/10/27 04:27:10 by aelberka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

#include <stdio.h>

int main (void)
{
	int fd;
	
	fd = open ("text.txt" , O_WRONLY | O_CREAT | 777);
	if(fd == -1)
		return 0;
	ft_putchar_fd('a' , fd);
	printf("%d\n" , fd);
	close(fd);
}
