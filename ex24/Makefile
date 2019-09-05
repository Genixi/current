# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: equiana <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/15 10:13:04 by equiana           #+#    #+#              #
#    Updated: 2019/07/16 08:09:40 by equiana          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

HEADER = includes

NAME = libft.a

SRC = srcs/ft_swap.c srcs/ft_strlen.c srcs/ft_strcmp.c srcs/ft_putstr.c srcs/ft_putchar.c

MUL = -c -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	@gcc $(MUL) $(SRC) -I$(HEADER)
	@ar rc $(NAME) ft_swap.o ft_strlen.o ft_strcmp.o ft_putstr.o ft_putchar.o
	@ranlib $(NAME)

clean:
	@/bin/rm -f ft_swap.o ft_strlen.o ft_strcmp.o ft_putstr.o ft_putchar.o

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
