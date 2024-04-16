# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cda-fons <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/15 18:12:24 by cda-fons          #+#    #+#              #
#    Updated: 2024/04/16 13:30:45 by cda-fons         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Werror -Wextra
SRCS = $(wildcard *.c)
OBJS = $(SRCS:.c=.o)
BINARY = libft.a
DEPS = libft.h

all : $(BINARY)

$(BINARY) : $(OBJS)
	ar rcs $(BINARY) $(OBJS)

%.o: %.c $(DEPS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(BINARY)

re: clean all
