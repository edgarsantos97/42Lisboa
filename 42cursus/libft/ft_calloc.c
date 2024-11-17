/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edgarrod <edgarrod@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 21:07:15 by edgarrod          #+#    #+#             */
/*   Updated: 2024/11/17 21:27:05 by edgarrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	void	*n;

	i = count * size;
	if (count && size && ((i / size) != count))
		return (NULL);
	n = malloc(i);
	if (!n)
		return (NULL);
	ft_bzero(n, i);
	return (n);
}

/* int	main(void)
{
	int *ptr1 = (int *)ft_calloc(10, sizeof(int));
	if (ptr1 != NULL)
		printf("ft_calloc: Success!\n");
	int *ptr2 = (int *)calloc(10, sizeof(int));
	if (ptr2 != NULL)
		printf("   calloc: Success!\n");

	return (0);
} */