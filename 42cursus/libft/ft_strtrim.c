/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edgarrod <edgarrod@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 21:41:09 by edgarrod          #+#    #+#             */
/*   Updated: 2024/12/13 15:23:06 by edgarrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_char(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

static int	ft_charstart(char const *s, char const *set)
{
	size_t	i;

	i = 0;
	while (s[i] && ft_char(s[i], set) == 1)
	{
		i++;
	}
	return (i);
}

static int	ft_charend(char const *s, char const *set, size_t slen)
{
	while (slen > 0 && ft_char(s[slen - 1], set) == 1)
	{
		slen--;
	}
	return (slen);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	s;
	size_t	e;
	char	*strim;

	s = ft_charstart(s1, set);
	e = ft_charend(s1, set, ft_strlen(s1));
	if (s >= e)
	{
		strim = malloc(1);
		if (!strim)
			return (NULL);
		strim[0] = '\0';
		return (strim);
	}
	strim = malloc(sizeof(char) * (e - s + 1));
	if (!strim)
		return (NULL);
	ft_strlcpy(strim, s1 + s, (e - s + 1));
	return (strim);
}

/* int	main(void)
{

	char *trim = ft_strtrim("abcHelloWorldabc", "abc");
	printf("%s\n", trim);
	trim = ft_strtrim("", "");
	printf("%s\n", trim);
	trim = ft_strtrim("", "abc");
	printf("%s\n", trim);
} */