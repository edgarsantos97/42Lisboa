/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edgarrod <edgarrod@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 18:21:00 by edgarrod          #+#    #+#             */
/*   Updated: 2024/12/13 15:23:01 by edgarrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	if ((char)c == '\0')
	{
		return ((char *)&str[i]);
	}
	while (i >= 0)
	{
		if (str[i] == (char)c)
		{
			return ((char *)&str[i]);
		}
		i--;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	*str;
	int		i;

	str = "Hello World!";
	i = '\0';
	printf("   strchr: %s\n", strchr(str, i));
	printf("   strrchr: %s\n", strrchr(str, i));
	printf("ft_strrchr: %s\n", ft_strrchr(str, i));
}
*/