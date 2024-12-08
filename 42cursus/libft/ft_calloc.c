/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edgarrod <edgarrod@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 21:07:15 by edgarrod          #+#    #+#             */
/*   Updated: 2024/12/08 12:36:23 by edgarrod         ###   ########.fr       */
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

/*  int	main(void)
{
	char *ptr1 = ft_calloc(10, sizeof(int));
	int j ;
	
	j = 0;
	if (ptr1 != NULL)
		printf("ft_calloc: Success!\n");
	while (j < 40)
	{
		if(ptr1[j] == '\0')
			printf("0");
		else
			printf("%c", ptr1[j]);
		j++;
	}
	printf("\n");
	j = 0;
	char *ptr2 = calloc(10, sizeof(int));
	if (ptr2 != NULL)
		printf("   calloc: Success!\n");
	while (j < 40)
	{
		if(ptr2[j] == '\0')
			printf("0");
		else
			printf("%c", ptr2[j]);
		j++;
	}
	return (0);
} */ 