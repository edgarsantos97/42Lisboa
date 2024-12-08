/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edgarrod <edgarrod@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 22:49:55 by edgarrod          #+#    #+#             */
/*   Updated: 2024/12/08 10:01:06 by edgarrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		f(i, s);
		i++;
	}
}
/*
void	modify_char(unsigned int i, char *c) {
	c[i] = c[i] - 32;
}

int	main(void)
{
	char	s[] = "helloworld";

	ft_striteri(s, modify_char);
	printf("%s\n", s);
	return (0);
}
*/