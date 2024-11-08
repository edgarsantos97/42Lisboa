/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edgarrod <edgarrod@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 18:08:55 by edgarrod          #+#    #+#             */
/*   Updated: 2024/11/08 18:11:46 by edgarrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <unistd.h>
#include <stdio.h>
#include <ctype.h>

int ft_isalnum(int i)
{
    if (((i >= '0') && (i <= '9')) || (((i >= 'a') && (i <= 'z')) || ((i >= 'A') && (i <= 'Z'))))
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

    c = '-';

    printf("ft_isalnum: %d", ft_isalnum(c));
    printf("\n");
    printf("isalnim: %d", isalnum(c));
}
*/