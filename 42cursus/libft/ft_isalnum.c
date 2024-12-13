/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edgarrod <edgarrod@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 18:08:55 by edgarrod          #+#    #+#             */
/*   Updated: 2024/12/13 15:20:56 by edgarrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int i)
{
	if (((i >= '0') && (i <= '9')) || (((i >= 'a') && (i <= 'z')) || ((i >= 'A')
				&& (i <= 'Z'))))
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

	c = '-';
	printf("ft_isalnum: %d", ft_isalnum(c));
	printf("\n");
	printf("isalnim: %d", isalnum(c));
}
*/