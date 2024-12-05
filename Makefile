# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dgeorgiy <dgeorgiy@student.42london.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/01 14:45:36 by dgeorgiy          #+#    #+#              #
#    Updated: 2024/12/01 22:21:03 by dgeorgiy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = get_next_line.a
CC = gcc
FLAGS = -Wall -Wextra -Werror
MEMORY = -g3 -gdwarf-3 -fsanitize=leak -fsanitize=address
SRC = get_next_line \
	get_next_line_utils

AR = ar rcs
TEST_SRC = test_main.c
MEM_TEST_EXEC = mem_test_gnl
TEST_EXEC = test_gnl

SRCS = $(addsuffix .c, $(SRC))
OBJS = $(addsuffix .o, $(SRC))

.c.o:
	$(CC) $(FLAGS) -c -o $@ $<

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

mem: $(OBJS) 
	$(CC) $(FLAGS) $(MEMORY) $(OBJS) $(TEST_SRC) -o $(MEM_TEST_EXEC)

test: $(OBJS)
	$(CC) $(FLAGS) $(OBJS) $(TEST_SRC) -o $(TEST_EXEC)

clean: 
	rm -f *.o

fclean: clean
	rm -f $(TEST_EXEC) $(MEM_TEST_EXEC) $(NAME)

re: fclean all

.PHONY: test re clean fclean all mem_test
