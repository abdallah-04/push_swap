# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amufleh <amufleh@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/17 13:57:49 by amufleh           #+#    #+#              #
#    Updated: 2025/12/22 17:38:55 by amufleh          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = input_validation.c \
		list_fun2.c \
		list_fun1.c \
		main.c \
		utils.c \
		instructions.c \
		hard_coded_sort.c \
		sort_by_index.c \
		radix_sort.c

CC = cc
CFLAGS = -Wall -Wextra -Werror
OBJ = $(SRC:.c=.o)
NAME = push_swap

all: $(NAME)
$(NAME): $(OBJ) $(GNL)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
