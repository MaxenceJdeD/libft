# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mjacques <mjacques@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/09 11:32:00 by mjacques          #+#    #+#              #
#    Updated: 2018/09/19 23:39:31 by mjacques         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			= gcc
RM			= rm -rf
NAMELIB		= libft.a
CFLAGS		= -Wall -Wextra -Werror

HEADER		= header/

IS			= ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c
STRUCT		= ft_lstadd.c ft_lstdel.c ft_lstdelone.c ft_lstiter.c ft_lstmap.c\
			  ft_lstnew.c
MEMORY		= ft_bzero.c ft_memalloc.c ft_memccpy.c ft_memcpy.c ft_memcmp.c\
			  ft_memchr.c ft_memdel.c ft_memmove.c ft_memset.c
NUMBER		= ft_atoi.c ft_itoa.c ft_itoa_base.c ft_int_swap.c
PRINT		= ft_putchar_fd.c ft_putchar.c ft_putendl_fd.c ft_putendl.c\
			  ft_putnbr_fd.c ft_putnbr.c ft_putstr_fd.c ft_putstr.c\
			  ft_putwchar.c ft_putwstr.c
STRING		= ft_strcat.c ft_strchr.c ft_strclr.c ft_strcmp.c ft_strcpy.c\
			  ft_strdel.c ft_strdup.c ft_strequ.c ft_striter.c ft_striteri.c\
			  ft_strjoin.c ft_strlcat.c ft_strlen.c ft_strmap.c ft_strmapi.c\
			  ft_strncat.c ft_strncmp.c ft_strncpy.c ft_strnequ.c ft_strnew.c\
			  ft_strnstr.c ft_strrchr.c ft_strsplit.c ft_strstr.c ft_strsub.c\
			  ft_strtrim.c ft_strappend.c ft_strmcpy.c ft_wstrlen.c
CHAR		= ft_tolower.c ft_toupper.c ft_wcharlen.c

FUNCTIONS	= $(IS) $(STRUCT) $(MEMORY) $(NUMBER) $(PRINT) $(STRING) $(CHAR)

FILES		= $(addprefix srcs/, $(FUNCTIONS))

OBJECTS		= $(FILES:.c=.o)

.PHONY: all clean fclean re

all: $(NAMELIB)

$(OBJECTS): $(FILES)
	@echo -n 'Compiling $(subst .a,,$(NAMELIB))...'
	@$(CC) $(CFLAGS) -c $(FILES) -I $(HEADER)
	@mv $(FUNCTIONS:.c=.o) srcs/

$(NAMELIB): $(OBJECTS)
	@ar rc $(NAMELIB) $(OBJECTS)
	@ranlib $(NAMELIB)
	@echo "\t\t\033[32mDone!\033[0m"

clean:
	@$(RM) $(OBJECTS)

fclean: clean
	@echo -n 'Cleaning  $(subst .a,,$(NAMELIB))...'
	@$(RM) $(NAMELIB)
	@echo "\t\t\033[31mDone!\033[0m"

re: fclean all
