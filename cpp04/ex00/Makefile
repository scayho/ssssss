# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abelahce <abelahce@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/25 01:25:05 by abelahce          #+#    #+#              #
#    Updated: 2023/02/08 15:59:45 by abelahce         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=c++

CFLAGS= -Wall -Wextra -Werror -std=c++98

NAME=animal

HDR=Animal.hpp Cat.hpp Dog.hpp

SRC := main.cpp	Animal.cpp Cat.cpp Dog.cpp


OBJ := $(SRC:.cpp=.o)

%.o : %.cpp $(HDR)
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)


$(NAME):$(OBJ)
	$(CC) $(CFLAGS)  $(OBJ) -o $(NAME)

clean :
	rm -rf  $(OBJ)

fclean: clean
	rm -rf animal

re: fclean all

