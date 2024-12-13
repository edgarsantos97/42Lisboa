/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edgarrod <edgarrod@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 21:52:34 by edgarrod          #+#    #+#             */
/*   Updated: 2024/12/13 15:23:11 by edgarrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*sub;
	size_t	n;

	if (!s)
		return (NULL);
	i = 0;
	n = ft_strlen(s);
	if (start > n)
		len = 0;
	else if (n < (start + len))
		len = n - start;
	sub = malloc(sizeof(char) * (len + 1));
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
/*
 int	main(void)
{
	const char *s = "01234";

	char *sub = ft_substr(s, 10, 10);
	printf("ft_substr: |%s", sub);
}  */