# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pterekho <pterekho@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/28 14:20:57 by pterekho          #+#    #+#              #
#    Updated: 2023/06/07 18:10:11 by pterekho         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SRCS = ft_printf.c	printCharacters.c	printNumbers.c	printBase16.c


OBJS = ${SRCS:.c=.o}


CC = gcc
CFLAGS = -Werror -Wall -Wextra
RM = rm -rf
AR = ar rc

.c.o: ${OBJS}
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}
${NAME}: ${OBJS}
	${AR} ${NAME} ${OBJS}

	

clean:
	${RM} ${OBJS} 

fclean: clean
		${RM} ${NAME}

re: fclean all

all: ${NAME}


