# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/10 09:15:30 by mlouis            #+#    #+#              #
#    Updated: 2025/12/17 09:55:43 by mlouis           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY = all clean fclean re

NAME = harl.out
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = Harl.cpp main.cpp
INCS = Harl.hpp
OBJS = $(SRCS:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJS) $(INCS)
	$(CC) $(CFLAGS) $(OBJS) -o $@

%.o: %.cpp
	$(CC) $(CFLAGS) -I. -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean:
	rm -rf $(OBJS)
	rm -rf $(NAME)

re: fclean
	$(MAKE) all