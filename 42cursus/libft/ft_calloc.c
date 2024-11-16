/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edgarrod <edgarrod@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 21:07:15 by edgarrod          #+#    #+#             */
/*   Updated: 2024/11/16 21:16:42 by edgarrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/* void    *calloc(size_t count, size_t size)
{
    
} */

int main()
{
    int *ptr = (int *)calloc(10, sizeof(int));

    printf("   calloc: %d", *ptr);
}