/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edgarrod <edgarrod@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:36:37 by edgarrod          #+#    #+#             */
/*   Updated: 2024/11/11 15:08:26 by edgarrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <strings.h>

char *ft_strchr(const char *str, int c)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if(str[i] == (char)c)
      {
        return (char *)&str[i];
      }
      i++;
    }
    if ((char)c == '\0')
    {
        return (char *)&str[i];
    }
    return NULL;
}
/*
int main()
{
    char *str = "Hello";
    char c;

    c = '\0';

    printf("ft_strchr: %s\n", ft_strchr(str, c));
    printf("   strchr: %s\n", strchr(str, c));
}
*/