# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/30 12:59:35 by aamajane          #+#    #+#              #
#    Updated: 2023/04/03 00:06:35 by aamajane         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	btc

SRCS	=	main.cpp \
			BitcoinExchange.cpp

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
