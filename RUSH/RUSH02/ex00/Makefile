# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    make                                               :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dkpg-md- <dkpg-md-@student.42berlin.d      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/09 17:02:04 by dkpg-md-          #+#    #+#              #
#    Updated: 2025/03/09 17:02:44 by dkpg-md-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_dict.c ft_parsing.c ft_str.c ft_values.c main.c ft_new.c

OBJS = ${SRCS:.c=.o}

NAME	= rush-02

CC	= gcc
CFLAGS	= -Wall -Wextra -Werror -I includes

all:	${NAME}

${NAME}: ${OBJS}
	${CC} ${CFLAGS} -o ${NAME} ${OBJS}

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

clean:
	rm -f ${OBJS}

fclean:	clean
	rm -f ${NAME}

re:	fclean all

.PHONY:	all clean fclean re
