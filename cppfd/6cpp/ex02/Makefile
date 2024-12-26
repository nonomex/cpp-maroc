# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aammirat <aammirat@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/19 14:43:55 by aammirat          #+#    #+#              #
#    Updated: 2024/12/19 15:14:23 by aammirat         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= identify

SRCS	= main.cpp \
			A.cpp \
			B.cpp \
			C.cpp \
			Base.cpp

HEADERS = Base.hpp \
			A.hpp \
			B.hpp \
			C.hpp

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