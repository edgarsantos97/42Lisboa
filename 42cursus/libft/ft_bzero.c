/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edgarrod <edgarrod@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 17:23:02 by edgarrod          #+#    #+#             */
/*   Updated: 2024/11/16 12:10:59 by edgarrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <strings.h>
#include <unistd.h>

void	ft_bzero(void *s, size_t i)
{
	char	*c;
	size_t	n;

	c = (char *)s;
	n = 0;
	while (n < i)
	{
		c[n] = '\0';
		n++;
	}
}
/*
int	main(void)
{
	char	c[] = "Hello";
	int		i;

	i = 0;
	ft_bzero(c, i);
	printf("ft_bzero: %s\n", c);
	bzero(c, i);
	printf("   bzero: %s\n", c);
}
*/