# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lpan <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/09 14:42:19 by lpan              #+#    #+#              #
#    Updated: 2018/11/09 14:42:23 by lpan             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Werror -Wextra -I ./includes/

NAME = libft.a
PATH = srcs/
_SRC = ft_putstr.c \
		ft_swap.c \
		ft_putchar.c \
		ft_strlen.c \
		ft_strcmp.c
SRC = $(addprefix $(PATH), $(_SRC))
OBJ = $(SRC:.c=.o)

.PHONY: all clean fclean re

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
