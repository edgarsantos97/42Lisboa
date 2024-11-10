/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edgarrod <edgarrod@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 17:45:49 by edgarrod          #+#    #+#             */
/*   Updated: 2024/11/10 18:56:54 by edgarrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <strings.h>

void *ft_memcpy(void *dest, void *src, size_t i)
{
    char *s;
    char *d;
    size_t n;
    
    if (!src || !dest)
    {
        return NULL;
    }
    
    d = (char *)dest;
    s = (char *)src;
    n = 0;
    while (n < i)
    {
        d[n] = s[n];
        n++;
    }
    
    return dest;
}
/*
int main()
{
    char src[] = "Hello World!";
    char dest1[50];
    char dest2[50];
    size_t i;

    i = 5;
    
    ft_memcpy(dest1, src, i);
    printf("ft_memcpy: %s\n", dest1);
    memcpy(dest2, src, i);
    printf("   memcpy: %s\n", dest2);
}
*/
