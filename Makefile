# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ayellin <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/11 14:52:30 by ayellin           #+#    #+#              #
#    Updated: 2019/09/16 21:21:45 by ayellin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= libft.a

SO_NAME := libft.so

SRC		:= ft_atoi.c ft_bzero.c ft_count_digits.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_ischar.c ft_isdigit.c ft_islower.c ft_isprint.c ft_isspace.c ft_isupper.c ft_itoa.c ft_itostr.c \
		  ft_lstadd.c ft_lstdelone.c ft_lstdel.c ft_lstiter.c ft_lstlen.c ft_lstmap.c ft_lstnew.c ft_memalloc.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memdel.c ft_memmove.c \
          ft_memrcpy.c ft_memset.c ft_power.c ft_putchar.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr.c ft_putnbr_fd.c ft_putstr.c ft_putstr_fd.c ft_strcat.c ft_strchr.c ft_strclr.c \
          ft_strcmp.c ft_strcpy.c ft_strdel.c ft_strdup.c ft_strequ.c ft_striter.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlen.c ft_strmap.c ft_strmapi.c ft_strncat.c ft_strncmp.c ft_strncpy.c \
          ft_strnequ.c ft_strnew.c ft_strnlen.c ft_strnstartswith.c ft_strnstr.c ft_strrchr.c ft_strrev.c ft_strsplit.c ft_strstartswith.c ft_strstr.c ft_strsub.c ft_strtrim.c ft_tolower.c ft_toupper.c \
          ft_putendl.c


OBJ		= $(SRC:.c=.o)



CC		:= gcc

CFLAGS	:= -Werror -Wextra -Wall

TEST 	:= minunit.c test_ft_memcpy.c ft_memcpy.c

CHECKER_DIR := /Users/ayellin/libft

all: $(NAME)

$(NAME): $(OBJ)
	@ar -rc  $(NAME) $(OBJ)

%.o: %.c
	$(CC) $< $(CFLAGS) -o $@ -c

%.c : $(SRC)

so:  $(SRC)
	$(CC) $(CFLAGS) -fPIC -c $(SRC)
	$(CC) -shared -Wl,-soname,$(SO_NAME) -o $(SO_NAME) $(OBJ)

clean:
	@rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -f $(SO_NAME)

re: fclean all

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