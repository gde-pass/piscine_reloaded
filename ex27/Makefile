# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile2                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gde-pass <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/13 11:24:01 by gde-pass          #+#    #+#              #
#    Updated: 2017/11/13 11:31:58 by gde-pass         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
SRC = ./srcs/display_file.c
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	clang $(SRC) $(FLAGS) -o $(NAME)

clean:
	@echo -n

fclean: clean
	rm -rf $(NAME)

re: fclean all
