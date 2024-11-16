/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edgarrod <edgarrod@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 16:20:36 by edgarrod          #+#    #+#             */
/*   Updated: 2024/11/16 10:30:29 by edgarrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#include <stdio.h>
#include <unistd.h>

int	ft_isalpha(int i)
{
	if (((i >= 'a') && (i <= 'z')) || ((i >= 'A') && (i <= 'Z')))
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
	char	c;

	c = 'A';
	printf("ft_isalpha: %d", ft_isalpha(c));
	printf("\n");
	printf("isalpha: %d", isalpha(c));
}
*/