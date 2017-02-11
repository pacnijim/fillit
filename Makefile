# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pacnijim <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/01/21 03:00:08 by pacnijim          #+#    #+#              #
#    Updated: 2017/02/11 03:58:02 by pacnijim         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit
SRC = main.c ft_error.c ft_putchar.c ft_putstr.c ft_mktab.c ft_memalloc.c \
	  ft_bzero.c ft_strlen.c ft_check_map.c ft_putnbr.c ft_mklist.c \
	  ft_strsub.c ft_check_map2.c ft_strdup.c ft_strstr.c ft_test_form.c \
	  debug.c
HEADER = lib_fillit.h
OBJ = $(SRC:.c=.o)
CC = gcc -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -I $(HEADER) -o $(NAME)

$(OBJ):
	$(CC) -c $(SRC) -I $(HEADER)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

