# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abergman <abergman@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/10 21:30:22 by abergman          #+#    #+#              #
#    Updated: 2025/03/03 18:07:08 by abergman         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= harlFilter
OBJ_DIR := bin
SOURCE	:= main.cpp Harl.cpp
OBJECTS	:= $(addprefix $(OBJ_DIR)/, $(SOURCE:.cpp=.o))
HEADER	:= File.hpp
CC		:= c++
FLAGS	:= -std=c++98 -Wall -Wextra -Werror -g3

all: $(OBJ_DIR) $(NAME)
	@toilet -f smblock --filter metal "ex06: ./harlharlFilter"

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