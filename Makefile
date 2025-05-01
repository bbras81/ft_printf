# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brunmigu <brunmigu@students.42porto.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/01 09:47:45 by brunmigu          #+#    #+#              #
#    Updated: 2025/05/01 09:52:47 by brunmigu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
COMPILER = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror
INCLUDE = -I.

SRCS = ft_printf.c ft_putchar.c ft_tester.c ft_utils.c


OBJS = $(SRCS:.c=.o)

all: $(NAME)

%.o: %.c
	$(COMPILER) $(CFLAGS) $(INCLUDE) -c $< -o $@

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean:
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
