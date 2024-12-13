/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edgarrod <edgarrod@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 19:00:19 by edgarrod          #+#    #+#             */
/*   Updated: 2024/12/13 15:21:42 by edgarrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	if (s > d)
	{
		while (i > n)
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

/*  
int	main(void)
{
	char	src1[] = "Hello World!";
	char	src2[] = "Hello World!";
	char	src3[] = "Hello World!";
	char	src4[] = "Hello World!";
	char	dest1[20];
	char	dest2[20];
	size_t	i;

	i = 13;
	ft_memmove(dest1, src1, i);
	printf("ft_memmove: %s\n", dest1);
	memmove(dest2, src2, i);
	printf("   memmove: %s\n", dest2);

	ft_memmove(src3 + 6, src3, 6);
	printf("ft_memmove: %s\n", src3);
	memmove(src4 + 6, src4, 6);
	printf("   memmove: %s", src4);
}  */
