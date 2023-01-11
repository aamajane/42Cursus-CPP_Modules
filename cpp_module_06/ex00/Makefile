# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/06 19:58:22 by aamajane          #+#    #+#              #
#    Updated: 2023/01/11 17:05:33 by aamajane         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	convert

SRCS	=	main.cpp

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
