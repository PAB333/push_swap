# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pibreiss <pibreiss@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/03 17:36:56 by pibreiss          #+#    #+#              #
#    Updated: 2025/01/04 15:31:51 by pibreiss         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRC = src/instructions/*.c \

$(NAME):
	$(CC) $(CFLAGS) $(SRC) -Iincludes -o $(NAME)

all : $(NAME)

clean :
	rm -rf src/*.o

fclean : clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re