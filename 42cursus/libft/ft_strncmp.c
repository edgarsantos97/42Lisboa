/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edgarrod <edgarrod@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 18:39:50 by edgarrod          #+#    #+#             */
/*   Updated: 2024/12/13 15:22:53 by edgarrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (str1[i] == str2[i] && str1[i] != '\0' && str2[i] != '\0' && i < n
		- 1)
		i++;
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}
/*
int	main(void)
{
	char	*str1;
	char	*str2;
	size_t	n;

	str1 = "ADCD";
	str2 = "ADC";
	n = 4;
	printf("ft_strncmp: %d\n", ft_strncmp(str1, str2, n));
	printf("   strncmp: %d\n", strncmp(str1, str2, n));
}
*/
