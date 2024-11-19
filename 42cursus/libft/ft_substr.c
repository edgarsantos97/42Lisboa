/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edgarrod <edgarrod@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 21:52:34 by edgarrod          #+#    #+#             */
/*   Updated: 2024/11/19 22:29:53 by edgarrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <unistd.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*sub;
	size_t			n;

	if (!s)
		return (NULL);
	i = 0;
	n = ft_strlen(s);
	if (start > n)
		n = 0;
	else
	{
		n = n - start;
		if (n > len)
			n = len;
	}
	sub = malloc(sizeof(char) * (n + 1));
	if (!sub)
		return (NULL);
	while (i < len && s[i])
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}

/* int	main(void)
{
	const char *s = "Hello World!";

	char *sub = ft_substr(s, 7, 7);
	printf("ft_substr: |%s", sub);
} */