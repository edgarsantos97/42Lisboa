/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edgarrod <edgarrod@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 20:19:55 by edgarrod          #+#    #+#             */
/*   Updated: 2024/11/16 16:48:59 by edgarrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	n;

	i = 0;
	n = 0;
	if (!big && len == 0)
		return (NULL);
	if (!little[0])
		return ((char *)big);
	while (big[i] && i < n)
	{
		while (big[i + n] == little[n] && (i + n) < len)
		{
			if (little[n + 1] == '\0')
				return ((char *)&big[i]);
			n++;
		}
		n = 0;
		i++;
	}
	return (NULL);
}

int	main(void)
{
	const char *b = "Foo Bar Baz";
	const char *l = "Bar";
	size_t i = 7;

	printf("ft_strnstr: %s", ft_strnstr(b, l, i));
	printf("   strnstr: %s\n", strnstr(b, l, i));

	return (0);
}