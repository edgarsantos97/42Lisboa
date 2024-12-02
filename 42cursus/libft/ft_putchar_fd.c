/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edgarrod <edgarrod@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 23:07:44 by edgarrod          #+#    #+#             */
/*   Updated: 2024/12/02 23:12:24 by edgarrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*
int	main(void)
{
	ft_putchar_fd('h',1);
	ft_putchar_fd('e',1);
	ft_putchar_fd('l',1);
	ft_putchar_fd('l',1);
	ft_putchar_fd('o',1);
	ft_putchar_fd(' ',1);
	ft_putchar_fd('w',1);
	ft_putchar_fd('o',1);
	ft_putchar_fd('r',1);
	ft_putchar_fd('l',1);
	ft_putchar_fd('d',1);
	ft_putchar_fd('!',1);
}
*/