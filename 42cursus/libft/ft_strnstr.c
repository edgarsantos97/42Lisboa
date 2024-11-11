/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edgarrod <edgarrod@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 20:19:55 by edgarrod          #+#    #+#             */
/*   Updated: 2024/11/11 20:35:23 by edgarrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;

    i = 0;
    while (i < len)
    {
        while (haystack[i] ==)
        {
            /* code */
        }
        i++;
    }
    
}

int	main(void)
{
	const char *s1 = "Foo Bar Baz";
	const char *s2 = "Bar";
	char *ptr;

	ptr = strnstr(s1, s2, 7);
    printf("strnstr: %s", ptr);
}