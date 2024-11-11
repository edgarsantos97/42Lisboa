/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edgarrod <edgarrod@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 18:39:50 by edgarrod          #+#    #+#             */
/*   Updated: 2024/11/11 19:17:41 by edgarrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;
	int		s;

	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
		{
			s = str1[i] - str2[i];
			return (s);
		}
		if ((str1[i] == '\0') || (str2[i] == '\0'))
		{
			s = 0;
			return (s);
		}
		i++;
	}
	s = 0;
	return (s);
}
/*
int	main(void)
{
	char *str1 = "ADCD";
	char *str2 = "ADC";
	size_t n = 4;

	printf("ft_strncmp: %d\n", ft_strncmp(str1, str2, n));
	printf("   strncmp: %d\n", strncmp(str1, str2, n));
}
*/
