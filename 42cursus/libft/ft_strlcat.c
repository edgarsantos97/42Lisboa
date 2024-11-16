/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edgarrod <edgarrod@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 21:46:38 by edgarrod          #+#    #+#             */
/*   Updated: 2024/11/16 11:03:10 by edgarrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <strings.h>
#include <unistd.h>

int	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	i;

	dest_len = 0;
	src_len = 0;
	i = 0;
	while (dest[dest_len] != '\0' && dest_len < n)
		dest_len++;
	while (src[src_len] != '\0')
		src_len++;
	if (n <= dest_len)
		return (src_len + n);
	while (src[i] != '\0' && dest_len + 1 < n)
	{
		dest[dest_len] = src[i];
		dest_len++;
		i++;
	}
	dest[dest_len] = '\0';
	return (dest_len + src_len);
}
/*
int	main(void)
{
	char src[] = "Hello World!";
	char dest[20];
	size_t n;

	n = 5;

	printf("ft_strlcat: %d\n", ft_strlcat(dest, src, n));
	printf("   strlcat: %lu\n", strlcat(dest, src, n));
}*/