/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edgarrod <edgarrod@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 19:18:36 by edgarrod          #+#    #+#             */
/*   Updated: 2024/12/08 18:39:39 by edgarrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
		{
			return ((void *)&str[i]);
		}
		i++;
	}
	return (NULL);
}

/*  int main(void)
{

const void	*s = "Hello World";
int			a = 'l';
size_t		n = 3;


char		*result1 = ft_memchr(s, a, n);

	if (result1 != NULL) {
		printf("found: %s\n", result1);
	} else {
		printf("not found\n");
	}

char		*result2 = memchr(s, a, n);

	if (result2 != NULL) {
		printf("found: %s\n", result2);
	} else {
		printf("not found\n");
	}


}  */
