# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/04 10:05:53 by mlouis            #+#    #+#              #
#    Updated: 2026/01/20 11:46:45 by mlouis           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY = all clean fclean re

NAME := moar.out

SRCS := Zombie.cpp zombieHorde.cpp main.cpp
INCS := Zombie.hpp
OBJS := $(SRCS:%.cpp=%.o)
DEPS = $(OBJS:.o=.d)

CXX := c++
CXXFLAGS := -Wall -Wextra -Werror -std=c++98
CPPFLAGS := $(addprefix -I,$(INC)) -MMD -MP 
MAKEFLAGS += --no-print-directory

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $@

%.o: %.cpp
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) -c $< -o $@

-include $(DEPS)

clean:
	rm -rf $(OBJS) $(DEPS)

fclean:
	rm -rf $(OBJS) $(DEPS)
	rm -rf $(NAME)

re: fclean
	$(MAKE) all
	