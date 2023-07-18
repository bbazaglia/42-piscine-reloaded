# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bbazagli <bbazagli@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/14 14:56:50 by bbazagli          #+#    #+#              #
#    Updated: 2023/07/14 15:40:43 by bbazagli         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


ODIR = ./srcs/
LDIR = ./includes/ 

NAME = libft.a
SRC = $(ODIR)ft_putchar.c $(ODIR)ft_putstr.c $(ODIR)ft_strcmp.c $(ODIR)ft_strlen.c $(ODIR)ft_swap.c
OBJ = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

all: $(NAME)

$(NAME):
	gcc -Wall -Werror -Wextra -c -I $(LDIR) $(SRC)
	ar rc $(NAME) $(OBJ)

clean: 
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY : all clean fclean re