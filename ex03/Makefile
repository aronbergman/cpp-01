# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abergman <abergman@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/17 11:36:19 by abergman          #+#    #+#              #
#    Updated: 2025/01/10 15:44:05 by abergman         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= unnecessaryViolence
OBJ_DIR := bin
SOURCE	:= main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
OBJECTS	:= $(addprefix $(OBJ_DIR)/, $(SOURCE:.cpp=.o))
HEADER	:= Weapon.hpp HumanA.hpp HumanB.hpp
CC		:= c++
FLAGS	:= -std=c++98 -Wall -Wextra -Werror -g3

all: $(OBJ_DIR) $(NAME)
	toilet -f smblock --filter metal "ex02: ./unnecessaryViolence"

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
