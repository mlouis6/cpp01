# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/03 15:31:10 by mlouis            #+#    #+#              #
#    Updated: 2025/12/27 14:36:19 by mlouis           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY = all clean fclean re

NAME = brainz.out
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = Zombie.cpp newZombie.cpp randomChump.cpp main.cpp
INCS = Zombie.hpp
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
