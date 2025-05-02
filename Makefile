# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brunmigu <brunmigu@students.42porto.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/01 09:47:45 by brunmigu          #+#    #+#              #
#    Updated: 2025/05/02 12:59:02 by brunmigu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
COMPILER = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror
INCLUDE = -I.
AR = ar rcs
LIBFT = ./libft/libft.a
LIBFTDIR = ./libft/

SRCS = ft_printf.c ft_putchar.c  ft_utils.c \
			 ft_putstr.c ft_putnbr.c \


OBJS = $(SRCS:.c=.o)

all: $(NAME)

%.o: %.c
	$(COMPILER) $(CFLAGS) $(INCLUDE) -c $< -o $@

$(NAME): $(OBJS) $(LIBFT)
	$(AR) $(NAME) $(OBJS) $(LIBFT)

$(LIBFT): $(LIBFTDIR)
	$(MAKE) -C $(LIBFTDIR)

clean:
	$(RM) $(OBJS)
	$(MAKE) clean -C $(LIBFTDIR)

fclean: clean
	$(RM) $(NAME)
	$(MAKE) fclean -C $(LIBFTDIR)

re: fclean all

.PHONY: all clean fclean re deps
