/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edgarrod <edgarrod@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 16:24:00 by edgarrod          #+#    #+#             */
/*   Updated: 2024/12/13 15:21:46 by edgarrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
// Alocar memoria com valor especifivo
int	main(void)
{
	char	str1[10];
	char	str2[10];
	char	c;
	size_t	i;

	c = 'A';
	i = 2;
	ft_memset(str1, c, i);
	str1[i] = '\0';
	printf("ft_memset: %s\n", str1);
	memset(str2, c, i);
	str2[i] = '\0';
	printf("   memset: %s\n", str2);
} */