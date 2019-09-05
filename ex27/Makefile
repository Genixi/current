# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: equiana <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/17 14:24:55 by equiana           #+#    #+#              #
#    Updated: 2019/07/18 08:33:17 by equiana          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

HEADER = header.h

NAME = ft_display_file

SRC = main.c ft_putchar.c ft_putnbr.c ft_putstr.c
ORC = main.o ft_putchar.o ft_putnbr.o ft_putstr.o

MUL = -c -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	@gcc $(MUL) $(SRC) $(HEADER)
	@gcc $(ORC) -o $(NAME)

clean:
	@/bin/rm -f header.h.gch main.o ft_putchar.o ft_putstr.o ft_putnbr.o

fclean: clean
	@/bin/rm -f $(NAME)
