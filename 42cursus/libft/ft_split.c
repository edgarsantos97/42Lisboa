/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edgarrod <edgarrod@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 20:54:57 by edgarrod          #+#    #+#             */
/*   Updated: 2024/12/03 21:37:34 by edgarrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	ft_word_c(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static size_t	ft_word_s(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static char	**ft_free(char **array, size_t i)
{
	while (i--)
		free(array[i]);
	free(array);
	return (NULL);
}

static char	**ft_fill(char const *s, char c, size_t word_c)
{
	char	**r;
	size_t	i;
	size_t	len;

	r = malloc(sizeof(char *) * (word_c + 1));
	if (!r)
		return (NULL);
	i = 0;
	while (i < word_c)
	{
		while (*s == c)
			s++;
		len = ft_word_s(s, c);
		r[i] = malloc(sizeof(char) * (len + 1));
		if (!r[i])
			return (ft_free(r, i));
		ft_strlcpy(r[i], s, len + 1);
		s += len;
		i++;
	}
	r[word_c] = NULL;
	return (r);
}

char	**ft_split(char const *s, char c)
{
	char	**r;
	size_t	word_c;

	if (!s)
		return (NULL);
	word_c = ft_word_c(s, c);
	r = ft_fill(s, c, word_c);
	return (r);
}
/*
int	main(void)
{
	char	*str;
	char	**split;
	int		i;

	str = "Hello World! 42Lisboa";
	split = ft_split(str, ' ');
	i = 0;
	while (split[i])
	{
		printf("%s\n", split[i]);
		free(split[i]);
		i++;
	}
	free(split);
	return (0);
}
*/