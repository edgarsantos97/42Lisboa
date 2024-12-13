/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edgarrod <edgarrod@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 22:19:54 by edgarrod          #+#    #+#             */
/*   Updated: 2024/12/13 15:22:49 by edgarrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	i;
	size_t	l;

	i = 0;
	l = ft_strlen(s);
	str = malloc(sizeof(char) * (l + 1));
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
char	to_upper(unsigned int i, char c)
{
	(void)i;
	if (c >= 'a' && c <= 'z')
	{
		return (char)(c - 32);
	}
	return (c);
}

char	increment_char(unsigned int i, char c)
{
	(void)i;
	return (c + 1);
}

int	main(void)
{
	const char	*s = "hello world!";
	char		*result;
	char		*result2;

	result = ft_strmapi(s, to_upper);
	result2 = ft_strmapi(s, increment_char);
	printf("%s\n", s);
	printf("%s\n", result);
	printf("%s\n", result2);
	free(result);
	free(result2);
	return (0);
}
*/