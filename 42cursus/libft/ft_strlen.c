/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edgarrod <edgarrod@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 14:10:22 by edgarrod          #+#    #+#             */
/*   Updated: 2024/11/10 14:38:15 by edgarrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

size_t ft_strlen(const char *str)
{
    size_t i; //É um valor unsigned, que armazena valores positivos, 
              //que adapta a tamanho de sistemas 32btis(4bytes) e 64bits(8bytes)

    i = 0;

    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}
/*
int main()
{
    char c[] = "Hello World";

    printf("ft_strlrn: %lu\n", ft_strlen(c));
    printf("strlen: %lu", strlen(c));
}
*/