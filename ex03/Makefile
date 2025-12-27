# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/04 14:03:48 by mlouis            #+#    #+#              #
#    Updated: 2025/12/27 14:36:19 by mlouis           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY = all clean fclean re

NAME = moar.out
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = Weapon.cpp HumanA.cpp HumanB.cpp main.cpp
INCS = Weapon.hpp HumanA.hpp HumanB.hpp
OBJS = $(SRCS:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJS) $(INCS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $@

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -I. -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean:
	rm -rf $(OBJS)
	rm -rf $(NAME)

re: fclean
	$(MAKE) all
