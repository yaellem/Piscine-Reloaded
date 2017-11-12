# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ymarcill <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/09 11:32:08 by ymarcill          #+#    #+#              #
#    Updated: 2017/11/09 19:55:49 by ymarcill         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_strcmp.c \
		./srcs/ft_strlen.c ./srcs/ft_swap.c
OBJ = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

OPTION = -c 

FLAGS = -Wextra -Wall -Werror

all: $(NAME)

$(NAME):
	gcc $(OPTION) $(FLAGS) $(SRC)
	ar rc $(NAME) $(OBJ)

clean: 	
		/bin/rm -rf $(OBJ)

fclean: clean
		/bin/rm -rf $(NAME)

re: fclean all
