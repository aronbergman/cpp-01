# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abergman <abergman@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/17 11:36:19 by abergman          #+#    #+#              #
#    Updated: 2025/01/15 18:57:47 by abergman         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= zombieHorde
OBJ_DIR := bin
SOURCE	:= main.cpp Zombie.cpp zombieHorde.cpp
OBJECTS	:= $(addprefix $(OBJ_DIR)/, $(SOURCE:.cpp=.o))
HEADERS := Zombie.hpp

CC		:= c++
FLAGS	:= -std=c++98 -Wall -Wextra -Werror -g3

all: $(OBJ_DIR) $(NAME)
	@toilet -f smblock --filter metal "ex01: ./zombieHorde"

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(OBJ_DIR)/%.o: %.cpp $(HEADERS)
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJECTS)
	$(CC) $(FLAGS) $(OBJECTS) -o $(NAME)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
