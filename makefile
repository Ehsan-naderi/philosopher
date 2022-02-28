# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mnaderi <mnaderi@student.42wolfsburg.de>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/03 23:40:13 by mnaderi           #+#    #+#              #
#    Updated: 2022/02/04 01:54:45 by mnaderi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= philo
INCLUDE	= philo.h

SRCS	= main.c init.c utils.c 

CC		= gcc
CFLAGS	= -Wall -Werror -Wall
RM		= rm -f
PTHREAD = -pthread

all:		${NAME}

${NAME}:	${SRCS} ${INCLUDE}
	${CC} ${CFLAGS} ${SRCS} -o ${NAME}

clean: 
			${RM} $(NAME)

fclean: clean
			${RM} $(NAME)

re:			fclean all

.PHONY: all clean fclean re