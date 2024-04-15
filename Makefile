# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cda-fons <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/15 18:12:24 by cda-fons          #+#    #+#              #
#    Updated: 2024/04/15 18:58:31 by cda-fons         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Werror -Wextra
SRCS = $(wildcard *.c)
OBJS = $(SRCS: .c=.0)
BINARY = libft.a
DEPS = libft.h

all : $(BINARY)

$(BINARY) : $(OBJS)
	ar rcs $(BINARY) $(OBJS)

%.o: %.c $(DEPS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(BINARY)

re: clean all
