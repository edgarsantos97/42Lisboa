/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edgarrod <edgarrod@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 16:20:36 by edgarrod          #+#    #+#             */
/*   Updated: 2024/11/08 17:38:45 by edgarrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <ctype.h>

int ft_isalpha(int i)
{
    if (((i >= 'a') && (i <= 'z')) || ((i >= 'A') && (i <= 'Z')))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
/*
int main()
{
    char c;

    c = 'A';
    
    printf("ft_isalpha: %d", ft_isalpha(c));
    printf("\n");
    printf("isalpha: %d", isalpha(c));
}
*/