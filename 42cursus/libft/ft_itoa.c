/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edgarrod <edgarrod@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 23:06:08 by edgarrod          #+#    #+#             */
/*   Updated: 2024/12/13 15:21:26 by edgarrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_size(int n)
{
	int	s;

	s = 0;
	if (n == -2147483648)
		return (11);
	if (n < 0)
	{
		s = 1;
		n *= -1;
	}
	while (n > 9)
	{
		n /= 10;
		s++;
	}
	if (n < 10)
		s++;
	return (s);
}

static char	*ft_char(int n, int size, char *str)
{
	unsigned int	i;

	str[size] = '\0';
	if (n == 0)
	{
		str[0] = 0 + 48;
		return (str);
	}
	if (n < 0)
	{
		str[0] = '-';
		i = n * -1;
	}
	else
		i = n;
	size -= 1;
	while (i > 0)
	{
		str[size] = ((i % 10) + 48);
		i /= 10;
		size--;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	int		size;
	char	*str;

	size = ft_size(n);
	str = malloc(sizeof(char) * (size + 1));
	if (!str)
		return (NULL);
	str = ft_char(n, size, str);
	return (str);
}

/*   int	main(void)
{
	char *s = ft_itoa(10);
	printf("%s\n", s);
} */ 