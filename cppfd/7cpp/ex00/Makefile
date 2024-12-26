# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aammirat <aammirat@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/19 16:27:30 by aammirat          #+#    #+#              #
#    Updated: 2024/12/19 16:43:21 by aammirat         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= templates

SRCS	= main.cpp

HEADERS = Templates.hpp

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