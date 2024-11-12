# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abekri <abekri@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/10 18:22:36 by abekri            #+#    #+#              #
#    Updated: 2024/11/11 00:17:57 by abekri           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

C++ = c++
FLAGS = -Wall -Wextra -Werror -std=c++17 -pedantic
FILES = 	main.cpp

OBJ = $(FILES:.cpp=.o)

NAME = HI_THIS_IS_BRAIN

all: $(NAME)

$(NAME):$(OBJ)
	$(C++) $(FLAGS) $(OBJ) -o $(NAME) 

%.o: %.cpp
	$(C++) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
