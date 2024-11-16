/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edgarrod <edgarrod@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 20:19:55 by edgarrod          #+#    #+#             */
/*   Updated: 2024/11/16 11:43:50 by edgarrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <bsd/string.h>


char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	char *

	i = 0;
	while (i < len)
	{
		
	}
} 

 int	main(void)
{
	const char *b = "Foo Bar Baz";
	const char *l = "Bar";
	size_t i = 7;

	printf("   strnstr: %s\n", strnstr(b, l, i));
	
	return 0;
} 