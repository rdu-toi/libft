# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rdu-toi <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/22 00:20:59 by rdu-toi           #+#    #+#              #
#    Updated: 2018/05/22 08:54:01 by rdu-toi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra

AC = ar -rc

RLIB = ranlib

SRCS = ft_isascii.c	ft_strchr.c	ft_strncmp.c ft_isdigit.c ft_strcmp.c \
ft_strncpy.c ft_atoi.c ft_isprint.c ft_strcpy.c ft_strstr.c ft_isalnum.c \
ft_strdup.c ft_tolower.c ft_isalpha.c ft_strlen.c ft_toupper.c ft_strcat.c \
ft_strncat.c ft_strnstr.c ft_strrchr.c ft_memset.c ft_bzero.c ft_memcpy.c \
ft_putchar.c

OBJS = $(SRCS:.c=.o)

$(NAME):
		$(CC) $(CFLAGS) -c $(SRCS)
		$(AC) $(NAME) $(OBJS)
		$(RLIB) $(NAME)

all: $(NAME)

clean:
		rm -rf $(OBJS)

fclean:	clean
		rm -rf $(NAME)

re:		fclean all