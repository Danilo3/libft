# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ayellin <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/11 14:52:30 by ayellin           #+#    #+#              #
#    Updated: 2019/09/12 16:49:54 by ayellin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#TODO: one name for src file
#TODO: .o .c extensions

NAME	:= libft.a

SRC		:= ft_strlen.c ft_strrev.c ft_itostr.c ft_memcmp.c ft_memcpy.c ft_memset.c

OBJ		:= ft_strlen.o ft_strrev.o ft_itostr.o ft_memcmp.o ft_memcpy.o ft_memset.o

CC		:= gcc

CFLAGS	:= -Werror -Wextra -Wall

TEST 	:= minunit.c test_ft_memcpy.c ft_memcpy.c

CHECKER_DIR := /Users/ayellin/21/tasks/libft/tests/libft/

all: $(NAME)

$(NAME): $(OBJ)
	ar -rc  $(NAME) $(OBJ)

$(OBJ): $(SRC)
		$(CC) $(CFLAGS) -c $(SRC)

clean:
	@rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

test: $(NAME) $(TEST)
	$(CC) $(CFLAGS) $(TEST) -o test  -L. -lft
	./test

clean_test: fclean
	rm -f test

move: $(NAME) $(SRC) libft.h
	cp $(NAME) $(CHECKER_DIR)
	cp $(SRC)  $(CHECKER_DIR)
	cp libft.h $(CHECKER_DIR)
	cp Makefile $(CHECKER_DIR)
