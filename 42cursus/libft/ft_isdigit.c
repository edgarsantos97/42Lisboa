/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edgarrod <edgarrod@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 17:36:52 by edgarrod          #+#    #+#             */
/*   Updated: 2024/11/08 17:57:15 by edgarrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <unistd.h>

int	ft_isdigit(int i)
{
	if ((i >= '0') && (i <= '9'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/*
int	main(void)
{
	char c;

	c = 'a';

	printf("ft_isdigit: %d", ft_isdigit(c));
	printf("\n");
	printf("isdigit: %d", isdigit(c));
}*/