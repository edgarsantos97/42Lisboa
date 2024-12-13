/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edgarrod <edgarrod@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:30:58 by edgarrod          #+#    #+#             */
/*   Updated: 2024/12/13 15:23:44 by edgarrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		c = c + 32;
	}
	return (c);
}
/*
int	main(void)
{
	char	c;

	c = 'Z';
	printf("ft_tolower: %d\n", ft_tolower(c));
	printf("   tolower: %d\n", tolower(c));
}
*/
