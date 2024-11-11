/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edgarrod <edgarrod@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 20:02:44 by edgarrod          #+#    #+#             */
/*   Updated: 2024/11/11 20:18:15 by edgarrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char	*str2;
	size_t	i;

    str1 = (unsigned char *)s1;
    str2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
		{
			return str1[i] - str2[i];
		}
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char str1[] = "ADC";
	char str2[] = "ACC";
	size_t i = 2;

	printf("ft_memcmp: %d\n", ft_memcmp(str1, str2, i));
	printf("   memcmp: %d\n", memcmp(str1, str2, i));
}
*/
