/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edgarrod <edgarrod@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 20:41:56 by edgarrod          #+#    #+#             */
/*   Updated: 2024/12/08 09:12:22 by edgarrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

int	ft_atoi(const char *str)
{
	size_t	i;
	long	n;
	int		v;
	long	prevn;

	i = 0;
	n = 0;
	v = 1;
	while (((str[i] >= 9 && str[i] <= 13) || str[i] == 32) && str[i] != '\0')
		i++;
	if ((str[i] == '-' || str[i] == '+') && str[i] != '\0')
	{
		if (str[i] == '-')
			v = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9' && str[i] != '\0')
	{
		prevn = n;
		n = n * 10 + (str[i] - 48);
		i++;
		if (n < prevn)
			return (-1);
	}
	return (n * v);
}

/*  int	main(void)
{
	printf("%d\n", INT_MAX);
	printf("%d\n", INT_MIN);
	char s[] = "-2147483648";

	printf("ft_atoi: %d\n", ft_atoi(s));
	printf("   atoi: %d\n", atoi(s));
} */