/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edgarrod <edgarrod@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 21:46:38 by edgarrod          #+#    #+#             */
/*   Updated: 2024/12/13 15:22:37 by edgarrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = 0;
	src_len = 0;
	i = 0;
	while (dst[dst_len] && dst_len < size)
		dst_len++;
	while (src[src_len])
		src_len++;
	if (dst_len >= size)
		return (size + src_len);
	while (src[i] && (dst_len + i) < (size - 1))
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}

/* 
// concatenar duas string
int	main(void)
{
	
	char src1[] = "Hello World!";
	char src2[] = "Hello World!";
	char dest1[50] = "-> ";
	char dest2[50] = "-> ";
	
	
	printf("ft_strlcat: %zu\n", ft_strlcat(dest1, src1, sizeof(dest1)));
	printf("%s\n",dest1);
	printf("   strlcat: %zu\n", strlcat(dest2, src2, sizeof(dest2)));
	printf("%s\n",dest2);
} */