/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edgarrod <edgarrod@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 16:24:00 by edgarrod          #+#    #+#             */
/*   Updated: 2024/11/10 18:43:33 by edgarrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

void *ft_memset(void *str, int c, size_t i)
{
    char *ptr;
    size_t n;
    
    ptr = (char *) str; //Permite que seja tratado byte por byte
    i = 0;
    
    while (n < i)
    {
        ptr[n] = c;
        n++;
    }
    return str;
}
/*
int main()
{
    char str[10];
    char c;
    size_t i;

    c = 'A';
    i = 5;

    ft_memset(str, c, i);
    str[i] = '\0';
    printf("ft_memset: %s\n", str);
    
    memset(str, c, i);
    str[i] = '\0';
    printf("   memset: %s\n", str);
}
*/
