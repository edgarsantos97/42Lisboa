/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edgarrod <edgarrod@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 13:48:03 by edgarrod          #+#    #+#             */
/*   Updated: 2024/11/10 14:09:43 by edgarrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <ctype.h>

int ft_isprint(int i)
{
    if(i >= 32 && i <= 126)
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

    c = '\n';

    printf("ft_isprint: %d", ft_isprint(c));
    printf("\n");
    printf("isprint: %d", isprint(c));
}
*/