# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mjacques <mjacques@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/09 11:32:00 by mjacques          #+#    #+#              #
#    Updated: 2018/07/15 13:51:42 by mjacques         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
LIB = libft.a
HEADER = ./libft.h
FLAGS = -Wall -Wextra -Werror
FILES = ./*.c
OBJECTS = ./*.o

$(NAME): $(OBJECTS)
	ar rc $(LIB) $(OBJECTS)
	ranlib $(LIB)

$(OBJECTS): $(FILES)
	gcc $(FLAGS) -c $(FILES) -I $(HEADER)

all: $(NAME)

clean:
	/bin/rm -rf $(OBJECTS)
	/bin/rm -rf */*.gch
	/bin/rm -rf ._*
	/bin/rm -rf .DS_Store

fclean: clean
	/bin/rm -rf $(NAME)

re: fclean all
