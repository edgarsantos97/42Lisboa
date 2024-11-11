/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edgarrod <edgarrod@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 09:18:45 by edgarrod          #+#    #+#             */
/*   Updated: 2024/11/11 09:29:46 by edgarrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <ctype.h>

int ft_toupper(int c)
{
    if((c >= 'a') && (c <= 'z'))
    {
        c = c - 32;
    }
    return c;
}
/*
int main()
{
    int c;

    c = 'b';
    
    printf("ft_toupper: %d\n", ft_toupper(c));
    printf("   toupper: %d\n", toupper(c));
}
*/
