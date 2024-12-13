# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: edgarrod <edgarrod@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/13 15:33:44 by edgarrod          #+#    #+#              #
#    Updated: 2024/12/13 15:38:05 by edgarrod         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a

SRCS = ft_printf.c

OBJS= $(SRCS:.c=.o)

CC					= cc
RM					= rm -f
CFLAGS				= -Wall -Wextra -Werror

all:				$(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME):			$(OBJS)
					ar rcs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re					