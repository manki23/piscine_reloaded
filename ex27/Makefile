# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: manki <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/07 10:38:45 by manki             #+#    #+#              #
#    Updated: 2017/11/10 17:38:28 by manki            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRCS += main.c

OBJ += main.o

all: $(NAME)

$(OBJ):
	gcc -c $(SRCS)

$(NAME): $(OBJ)
	gcc -Wall -Wextra -Werror -o $(NAME) $(OBJ)

clean:
	@/bin/rm -f *.o

fclean:
	@/bin/rm -f $(NAME)

re: fclean all
