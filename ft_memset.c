/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelberka <aelberka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 10:26:34 by aelberka          #+#    #+#             */
/*   Updated: 2026/10/22 12:33:50 by aelberka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;
	size_t			i;

	i = 0;
	p = (unsigned char *)s;
	while (i < n)
	{
		p[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

//#include <stdio.h>

//int main (void)
//{
//	int a;
//	int value = 3498767; 
//	int i = 0;
//	unsigned char *p;
//	p = (unsigned char *)&a;

//	while( i < 4)
//	{
//		ft_memset(p + i , value % 256 , 1);
//		value = value / 256;
//		i++;
//	}
//	printf("%d" , a);
	
//}


//int main ()
//{
//	int arr[4];
//	int arr1[4] = {65435 , 65464 , 656545 , 545355};
//	int i;
//	unsigned char *p;
//	int j;
	
//	i = 0;
//	while(i < 4)
//	{
//		j = 0;
//		p = (unsigned char *)&arr[i];
//		while(j < 4)
//		{
//			ft_memset(p + j, arr1[i] % 256 , 1);
//			arr1[i] = arr1[i] / 256;
//			j++;
//		}
//		i++;
//	}
	
//	i = 0;
//	while(i < 4)
//	{
//		printf("%d\n" , arr[i]);
//		i++;
//	}
//}




