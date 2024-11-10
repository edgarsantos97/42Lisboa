/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edgarrod <edgarrod@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 21:06:41 by edgarrod          #+#    #+#             */
/*   Updated: 2024/11/10 21:41:42 by edgarrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <strings.h>

int ft_strlcpy(char *dest, const char *src, size_t n)
{
    size_t i;
    
    i = 0;
    
    if (n > 0)
    {
        while (src[i] != '\0' && i < (n -1))
        {
            dest[i] = src[i];
            i++;
        }
        dest[i] = '\0';
    }

    while (src[i] != '\0')
    {
        i++;
    }
    
    return i;
}
/*
int main()
{
    const char src[] = "Hello";
    char dest[10];
    size_t n;

    n = 1;

    printf("ft_strlcpy: %d\n", ft_strlcpy(dest, src, n));
    printf("   strlcpy: %lu\n", strlcpy(dest, src, n));
}
*/
