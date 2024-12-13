/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edgarrod <edgarrod@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 17:23:02 by edgarrod          #+#    #+#             */
/*   Updated: 2024/12/13 15:20:50 by edgarrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t i)
{
	char	*c;
	size_t	n;

	c = (char *)s;
	n = 0;
	while (n < i)
	{
		c[n] = '\0';
		n++;
	}
}

/* int	main(void)
{
	char	c[6] = "Hello";
	char	d[6] = "Hello";
	int		i;
	int		j;
	int		x;
	i = 3;
	j = 0;
	x = 6;
	
	while (j < x)
	{
		if (c[j] == '\0')
		printf("0");
		else
		printf("%c",c[j]);
		j++;
	}
	printf("\n");

	
	ft_bzero(c, i);
	j = 0;
	while (j < x)
	{
		if (c[j] == '\0')
		printf("0");
		else
		printf("%c",c[j]);
		j++;
	}
	printf("\n");
	
	bzero(d, i);
	j = 0;
	while (j < x)
	{
		if (d[j] == '\0')
		printf("0");
		else
		printf("%c",d[j]);
		j++;
	}
	printf("\n");
}
 */