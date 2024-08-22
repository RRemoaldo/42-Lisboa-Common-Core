# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rasoares <rasoares@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/08 14:13:49 by rasoares          #+#    #+#              #
#    Updated: 2024/05/08 16:35:33 by rasoares         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS = ft_aux.c ft_printf.c

OBJS = $(SRCS:.c=.o)

CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror 

NAME = libftprintf.a

all: $(NAME)
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME) 

.PHONY: all clean fclean re bonus