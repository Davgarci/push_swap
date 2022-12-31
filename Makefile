# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: davgarci <davgarci@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/30 16:10:06 by davgarci          #+#    #+#              #
#    Updated: 2022/12/31 04:36:15 by davgarci         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRCS = main.c \
		create.c \
		mv_push.c \
		mv_rotate.c \
		mv_rev_rotate.c \
		mv_swap.c \
		ft_atoi.c \
		parsing.c \
		algorithm1.c \
		order_validation.c \
		algo_utils1.c \

OBJS = $(SRCS:.c=.o)

FLAGS = -Wall -Werror -Wextra
CFLAGS = -Wall -Werror -Wextra

CC = gcc

all: $(NAME)

$(NAME): $(OBJS)
	gcc $(FLAGS) $(OBJS) -o $(NAME)


clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re