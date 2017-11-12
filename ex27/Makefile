# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ymarcill <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/09 11:32:08 by ymarcill          #+#    #+#              #
#    Updated: 2017/11/09 22:46:06 by ymarcill         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRC = ./ft_display_file.c

OBJ = $(SRC:.c=.o)

OPTION = -c 

FLAGS = -Wextra -Wall -Werror

all: $(NAME)

$(NAME): $(OBJ)

%.o: %.c
	gcc $(OPTION) $(FLAGS) $< -o $@

clean: 
		/bin/rm -rf $(OBJ)

fclean: clean
		/bin/rm -rf $(NAME)

re: fclean all
