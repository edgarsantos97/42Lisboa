/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edgarrod <edgarrod@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 20:41:56 by edgarrod          #+#    #+#             */
/*   Updated: 2024/11/14 21:10:05 by edgarrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_atoi(const char *str)
{
	size_t	i;
	int		n;
	int		v;

	i = 0;
	n = 0;
	v = 1;
	while (((str[i] >= 9 && str[i] <= 13) || str[i] == 32) && str[i] != '\0')
	{
		i++;
	}
	if ((str[i] == '-' || str[i] == '+') && str[i] != '\0')
	{
		if (str[i] == '-')
		{
			v = -1;
		}
        i++;
	}
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9' && str[i] != '\0')
		{
			n = n * 10 + (str[i] - 48);
			i++;
		}
		i++;
	}
	return (n * v);
}

int	main(void)
{
	char s[] = "--1234";

	printf("   atoi: %d\n", atoi(s));
}