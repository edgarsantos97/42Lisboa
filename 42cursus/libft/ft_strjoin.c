/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edgarrod <edgarrod@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 14:31:06 by edgarrod          #+#    #+#             */
/*   Updated: 2024/12/08 13:43:50 by edgarrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <unistd.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	n;
	size_t	l;
	char	*str;

	if (!s1 && !s2)
		return (NULL);
	i = ft_strlen(s1);
	n = ft_strlen(s2);
	l = 0;
	str = malloc(sizeof(char) * (i + n + 1));
	if (!str)
		return (NULL);
	while (s1[l] != '\0')
	{
		str[l] = s1[l];
		l++;
	}
	while (l < (i + n))
	{
		str[l] = s2[l - i];
		l++;
	}
	str[l] = '\0';
	return (str);
}
/* 
// Concatenar duas strings
int	main(void)
{
	char *s1 = "Hello";
	char *s2 = "World!";

	char *str = ft_strjoin(s1, s2);
	printf("ft_strjoin: |%s", str);
} */