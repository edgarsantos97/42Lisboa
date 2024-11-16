/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edgarrod <edgarrod@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 19:18:36 by edgarrod          #+#    #+#             */
/*   Updated: 2024/11/16 10:30:41 by edgarrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
		{
			return ((void *)&str[i]);
		}
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	data1[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i'};
	char	data2[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i'};
	int		i;
	char	*pos1;
	char	*pos2;

	i = 0;
	pos1 = ft_memchr(data1, 'c', 4);
	pos2 = memchr(data2, 'c', 4);
	while (pos1[i] != '\0')
	{
		printf("pos1[%d]: %c ", i, pos1[i]);
		i++;
	}
	i = 0;
	printf("\n");
	while (pos2[i] != '\0')
	{
		printf("pos2[%d]: %c ", i, pos2[i]);
		i++;
	}
}
*/
