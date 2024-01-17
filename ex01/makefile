# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pineau <pineau@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/13 16:49:59 by pineau            #+#    #+#              #
#    Updated: 2024/01/16 14:19:14 by pineau           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = g++
CXXFLAGS = -Wall -Wextra -Werror
NAME = megaphone

SRC = PhoneBook.cpp \
		main.cpp\
		Contact.cpp\

OBJ = $(SRC:.cpp=.o)

$(NAME): $(OBJ)
	$(CXX)	$(CXXFLAGS)	-o $@ $^

all: $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ $<

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

