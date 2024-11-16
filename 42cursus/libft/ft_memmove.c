/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edgarrod <edgarrod@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 19:00:19 by edgarrod          #+#    #+#             */
/*   Updated: 2024/11/16 11:01:39 by edgarrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <unistd.h>

void	*ft_memmove(void *dest, const void *src, size_t i)
{
	unsigned char		*d;
	unsigned const char	*s;
	size_t				n;

	if (!dest && !src)
		return (NULL);
	d = (unsigned char *)dest;
	s = (unsigned const char *)src;
	n = 0;
	if (d <= s)
	{
		while (n < i)
		{
			d[n] = s[n];
			n++;
		}
	}
	else
	{
		while (i-- > 0)
			d[i] = s[i];
	}
	return (d);
}

/* int	main(void)
{
	char	src[] = "Hello World!";
	char	dest1[50];
	char	dest2[50];
	size_t	i;

	i = 7;
	ft_memmove(dest1, src, i);
	printf("ft_memmove: %s\n", dest1);
	memmove(dest2, src, i);
	printf("   memmove: %s\n", dest2);
} */
