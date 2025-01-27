# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pibreiss <pibreiss@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/03 17:36:56 by pibreiss          #+#    #+#              #
#    Updated: 2025/01/27 02:42:01 by pibreiss         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRC = 	src/instructions/*.c \
		src/algorithm/*.c \
		src/main/main.c \
		src/utils/*.c

OBJ = $(SRC:.c=.o)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(SRC) -Iincludes -o $(NAME)

all : $(NAME)

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re