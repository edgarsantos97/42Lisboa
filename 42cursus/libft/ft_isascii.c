/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edgarrod <edgarrod@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 18:14:13 by edgarrod          #+#    #+#             */
/*   Updated: 2024/11/16 10:30:32 by edgarrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#include <stdio.h>
#include <unistd.h>

int	ft_isascii(int i)
{
	if (i >= 0 && i <= 127)
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
	int	i;

	i = 0;
	while (i <= 200)
	{
	printf("ft_isascii: %d", ft_isascii(i));
	printf("\n");
	printf("isascii: %d", isascii(i));
	printf("\n");
	i++;
	}
}
*/