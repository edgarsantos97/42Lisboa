/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edgarrod <edgarrod@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 17:23:02 by edgarrod          #+#    #+#             */
/*   Updated: 2024/11/10 18:42:46 by edgarrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <strings.h>

void *ft_bzero(void *s, size_t i)
{
    char *c;
    size_t n;

    c = (char *)s;
    n = 0;
    while (n < i)
    {
        c[n] = '\0';
        n++;
    } 
    return s; 
}
/*
int main()
{
    char c[] = "Hello";
    int i;

    i = 0;

    ft_bzero(c, i);
    printf("ft_bzero: %s\n", c);
    bzero(c, i);
    printf("   bzero: %s\n", c);
}
*/