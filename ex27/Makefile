# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bbazagli <bbazagli@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/17 15:08:34 by bbazagli          #+#    #+#              #
#    Updated: 2023/07/17 16:14:38 by bbazagli         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
SRC = ft_display_file.c
CC = gcc -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	$(CC) $(SRC) -o $(NAME)

clean: 
	rm -f *.o

fclean: clean
	rm -f $(NAME) 
        
re: fclean all

