/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edgarrod <edgarrod@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 21:30:24 by edgarrod          #+#    #+#             */
/*   Updated: 2024/12/08 13:34:59 by edgarrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <unistd.h>

char	*ft_strdup(const char *s1)
{
	char	*str;
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(s1) + 1;
	str = (char *)malloc(sizeof(char) * len);
	if (!str)
		return (NULL);
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

/* int	main(void)
{
	// Duplica string e aloca memoria
    char s1[20] = "Hello World!";
    char *s2;
    int len1;
    int len2;

    s2 = ft_strdup(s1);
    len1 = ft_strlen(s1);
    len2 = ft_strlen(s2);
    printf("ft_strdup: %s %d -> %s %d\n", s1, len1, s2, len2);

    len1 = 0;
    len2 = 0;
    s2 = strdup(s1);
    len1 = ft_strlen(s1);
    len2 = ft_strlen(s2);
    printf("   strdup: %s %d -> %s %d\n", s1, len1, s2, len2);
} */