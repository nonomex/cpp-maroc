# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aammirat <aammirat@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/19 17:01:13 by aammirat          #+#    #+#              #
#    Updated: 2024/12/19 17:04:18 by aammirat         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= templates

SRCS	= main.cpp

HEADERS = Array.hpp

CC 		= c++

CFLAGS	= -Wextra -Wall -Werror -std=c++98

OBJS 	= $(SRCS:.cpp=.o)

%.o : %.cpp ${HEADERS}
	${CC} ${CFLAGS} -c $< -o $@

${NAME}: ${OBJS}
	${CC} ${OBJS} -o ${NAME}

all: ${NAME}

clean: 
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: clean re fclean all