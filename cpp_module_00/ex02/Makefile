# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/31 21:24:54 by aamajane          #+#    #+#              #
#    Updated: 2022/11/01 21:29:20 by aamajane         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	Account

SRCS	=	tests.cpp \
			Account.cpp

OBJS	=	$(SRCS:.cpp=.o)

CC		=	c++

CFLAGS	=	-Wall -Wextra -Werror -std=c++98

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

.PHONY:		all bonus clean fclean re
