# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/06 19:58:22 by aamajane          #+#    #+#              #
#    Updated: 2023/01/01 17:28:54 by aamajane         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	program

SRCS	=	main.cpp \
			AMateria.cpp \
			Character.cpp \
			Ice.cpp \
			Cure.cpp \
			MateriaSource.cpp

OBJS	=	$(SRCS:.cpp=.o)

CC		=	c++

CFLAGS	=	-Wall -Wextra -Werror -Wshadow -std=c++98

RM		=	rm -rf


all:		$(NAME)

$(NAME):	$(OBJS)
			@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

.cpp.o:
			@${CC} ${CFLAGS} -c $< -o ${<:.cpp=.o}

clean:
			@$(RM) $(OBJS)

fclean:		clean
			@$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
