# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ayellin <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/11 14:52:30 by ayellin           #+#    #+#              #
#    Updated: 2019/09/14 03:42:37 by ayellin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#TODO: one name for src file
#TODO: .o .c extensions

NAME	:= libft.a

SO_NAME := libft.so

SRC		:= ft_strlen.c ft_strrev.c ft_itostr.c ft_memcmp.c ft_memcpy.c ft_memset.c \
		ft_putchar_fd.c ft_islower.c ft_isupper.c ft_isalpha.c ft_bzero.c ft_isascii.c \
		ft_lstnew.c ft_atoi.c ft_toupper.c ft_tolower.c ft_isspace.c ft_isdigit.c \
		ft_isprint.c ft_isalnum.c ft_memccpy.c ft_memmove.c ft_memrcpy.c ft_memchr.c \
		ft_strdup.c ft_strcpy.c ft_strncpy.c ft_strcat.c ft_strncat.c ft_strlcat.c \
		ft_strcmp.c ft_strncmp.c ft_memalloc.c ft_memdel.c ft_strchr.c ft_strrchr.c \
		ft_strstr.c ft_strnstr.c

OBJ		:= ft_strlen.o ft_strrev.o ft_itostr.o ft_memcmp.o ft_memcpy.o ft_memset.o \
		ft_putchar_fd.o ft_islower.o ft_isupper.o ft_isalpha.o ft_bzero.o ft_isascii.o \
		ft_lstnew.o ft_atoi.o ft_toupper.o ft_tolower.o ft_isspace.o ft_isdigit.o \
		ft_isprint.o ft_isalnum.o ft_memccpy.o ft_memmove.o ft_memrcpy.o ft_memchr.o\
		ft_strdup.o ft_strcpy.o ft_strncpy.o ft_strcat.o ft_strncat.o ft_strlcat.o \
		ft_strcmp.o ft_strncmp.o ft_memalloc.o ft_memdel.o ft_strchr.o ft_strrchr.o \
		ft_strstr.o ft_strnstr.o
CC		:= gcc

CFLAGS	:= -Werror -Wextra -Wall

TEST 	:= minunit.c test_ft_memcpy.c ft_memcpy.c

CHECKER_DIR := /Users/ayellin/21/tasks/libft/tests/libft/

all: $(NAME)

$(NAME): $(OBJ)
	ar -rc  $(NAME) $(OBJ)

$(OBJ): $(SRC)
		$(CC) $(CFLAGS) -c $(SRC)

so:  $(SRC)
	$(CC) $(CFLAGS) -fPIC -c $(SRC)
	$(CC) -shared -Wl,-soname,$(SO_NAME) -o $(SO_NAME) $(OBJ)

clean:
	@rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -f $(SO_NAME)

test: $(NAME) $(TEST)
	$(CC) $(CFLAGS) $(TEST) -o test  -L. -lft
	./test

clean_test: fclean
	rm -f test

move: $(NAME) $(SRC) libft.h clean
	cp $(NAME) $(CHECKER_DIR)
	cp $(SRC)  $(CHECKER_DIR)
	cp libft.h $(CHECKER_DIR)
	cp Makefile $(CHECKER_DIR)
