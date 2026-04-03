# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: enucci <enucci@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/05 14:23:54 by enucci            #+#    #+#              #
#    Updated: 2026/03/05 23:29:54 by enucci           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = gcc
CFLAGS = -Wall -Wextra -Werror -g

SRCS =	main.c \
		error.c \
		stack.c \
		split.c \
		utils.c \
		operazione_push.c \
		operazione_swap.c \
		operazione_rotate.c \
		operazione_reverse_rotate.c \
		sort.c \
		turk.init.c \
		turk.target.c \
		turk.cost.c \
		turk.move.c

OBJS = $(SRCS:.c=.o)

LIBFT		= ft_printf/libft/libft.a
LIBPRINTF	= ft_printf/libftprintf.a

RM = rm -f

all: $(NAME)

$(LIBFT):
	$(MAKE) -C ft_printf/libft

$(LIBPRINTF): $(LIBFT)
	$(MAKE) -C ft_printf

$(NAME): $(LIBFT) $(LIBPRINTF) $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(LIBPRINTF) $(LIBFT) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)
	$(MAKE) -C ft_printf/libft clean
	$(MAKE) -C ft_printf clean

fclean: clean
	$(RM) $(NAME)
	$(MAKE) -C ft_printf/libft fclean
	$(MAKE) -C ft_printf fclean

re: fclean all

.PHONY: all clean fclean re