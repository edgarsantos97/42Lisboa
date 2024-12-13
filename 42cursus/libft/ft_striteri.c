/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edgarrod <edgarrod@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 22:49:55 by edgarrod          #+#    #+#             */
/*   Updated: 2024/12/13 15:22:29 by edgarrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/* void	modify_char(unsigned int i, char *c) {
	(void) i;
	*c = *c - 32;
}

int	main(void)
{
	//Aplica uma funcao em cada caracter 
	char	s1[] = "helloworld";

	ft_striteri(s1, modify_char);
	printf("%s\n", s1);
	return (0);
} */
