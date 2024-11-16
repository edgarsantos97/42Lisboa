/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edgarrod <edgarrod@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 16:24:00 by edgarrod          #+#    #+#             */
/*   Updated: 2024/11/16 16:55:35 by edgarrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <unistd.h>

void	*ft_memset(void *str, int c, size_t i)
{
	char	*ptr;

	ptr = (char *)str;
	while (i > 0)
	{
		ptr[i - 1] = c;
		i--;
	}
	return (str);
}
/*
int	main(void)
{
	char	str[10];
	char	c;
	size_t	i;

	c = 'A';
	i = 5;
	ft_memset(str, c, i);
	str[i] = '\0';
	printf("ft_memset: %s\n", str);
	memset(str, c, i);
	str[i] = '\0';
	printf("   memset: %s\n", str);
}
*/
