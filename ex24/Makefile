# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: manki <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/07 09:40:51 by manki             #+#    #+#              #
#    Updated: 2017/11/10 17:43:47 by manki            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

HEADERS = ./includes

SRC += srcs/ft_putchar.c
SRC += srcs/ft_putstr.c
SRC += srcs/ft_strcmp.c
SRC += srcs/ft_strlen.c
SRC += srcs/ft_swap.c

OBJ += ft_putchar.o
OBJ += ft_putstr.o
OBJ += ft_strcmp.o
OBJ += ft_strlen.o
OBJ += ft_swap.o

all : $(NAME)

$(OBJ):
	gcc -I $(HEADERS) -c $(SRC)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	@/bin/rm -f *.o

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
