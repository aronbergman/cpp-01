# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abergman <abergman@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/10 17:38:42 by abergman          #+#    #+#              #
#    Updated: 2025/01/10 18:39:51 by abergman         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= replace
OBJ_DIR := bin
SOURCE	:= main.cpp File.cpp
OBJECTS	:= $(addprefix $(OBJ_DIR)/, $(SOURCE:.cpp=.o))
HEADER	:= File.hpp
CC		:= c++
FLAGS	:= -std=c++98 -Wall -Wextra -Werror -g3

all: $(OBJ_DIR) $(NAME)
	toilet -f smblock --filter metal "ex04: ./replace"

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(OBJ_DIR)/%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJECTS)
	$(CC) $(FLAGS) $(OBJECTS) -o $(NAME)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re