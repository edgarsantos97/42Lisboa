/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edgarrod <edgarrod@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:36:37 by edgarrod          #+#    #+#             */
/*   Updated: 2024/12/08 13:32:11 by edgarrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <unistd.h>

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == (char)c)
		{
			return ((char *)&str[i]);
		}
		i++;
	}
	if ((char)c == '\0')
	{
		return ((char *)&str[i]);
	}
	return (NULL);
}

/* int	main(void)
{
	char	*str;
	char	c;

	str = "Hello";
	c = 'l';
	printf("ft_strchr: %s\n", ft_strchr(str, c));
	printf("   strchr: %s\n", strchr(str, c));
} */
