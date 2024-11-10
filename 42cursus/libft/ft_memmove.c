/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edgarrod <edgarrod@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 19:00:19 by edgarrod          #+#    #+#             */
/*   Updated: 2024/11/10 21:05:35 by edgarrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <strings.h>

void *ft_memmove(void *dest,  const void *src, size_t i)
{
    char *d;
    char *s;
    size_t n;

    if (!dest && !src)
    {
        return NULL;
    }

    d = (char *)dest;
    s = (char *)src;
    n = 0;
    if (d <= s)
    {
        while (n < i)
        {
            d[n] = s[n];
            n++;
        }
    }
    else
    {
        while (i > 0)
        {
            i--;
            d[i] = s[i];
        }
        
    }
    return d;
}

/*
int main()
{
    char src[] = "Hello World!";
    char dest1[50];
    char dest2[50];

    size_t i;
    
    i = 7;

    ft_memmove(dest1, src, i);
    printf("ft_memmove: %s\n", dest1);
    memmove(dest2, src, i);
    printf("   memmove: %s\n", dest2);
}  
*/
 
