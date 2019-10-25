# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ayellin <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/11 14:52:30 by ayellin           #+#    #+#              #
#    Updated: 2019/10/23 19:04:48 by ayellin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= libft.a

SRC_ALL		:= ft_atoi.c ft_bzero.c ft_count_digits.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_islower.c ft_isprint.c ft_isspace.c ft_isupper.c ft_itoa.c ft_itostr.c \
		  ft_lstadd.c ft_lstdelone.c ft_lstdel.c ft_lstiter.c ft_lstlen.c ft_lstmap.c ft_lstnew.c ft_memalloc.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memdel.c ft_memmove.c \
          ft_memrcpy.c ft_memset.c ft_power.c ft_putchar.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr.c ft_putnbr_fd.c ft_putstr.c ft_putstr_fd.c ft_strcat.c ft_strchr.c ft_strclr.c \
          ft_strcmp.c ft_strcpy.c ft_strdel.c ft_strdup.c ft_strequ.c ft_striter.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlen.c ft_strmap.c ft_strmapi.c ft_strncat.c ft_strncmp.c ft_strncpy.c \
          ft_strnequ.c ft_strnew.c ft_strnlen.c ft_strnstr.c ft_strrchr.c ft_strrev.c ft_strsplit.c ft_str_startswith.c ft_strstr.c ft_strsub.c ft_strtrim.c ft_tolower.c ft_toupper.c \
          ft_putendl.c ft_strchri.c ft_str_shift_left.c ft_strjoinf.c ft_strsubf.c get_next_line.c ft_init_arr.c ft_int_arr_cmp.c

SRC_MT	:=	ft_mt/ft_alloc_sqmt.c ft_mt/ft_free_sqmt.c ft_mt/ft_print_sqmt.c ft_mt/ft_free_mtrx.c

SRC_MATH := ft_math/ft_sqrt.c ft_math/ft_ispsqrt.c

SRC = $(SRC_MT) $(SRC_ALL) $(SRC_MATH)

OBJ		= $(SRC:.c=.o)

CC		:= gcc

CFLAGS	:= -Werror -Wextra -Wall

INC		:= includes

all: $(NAME)

$(NAME): $(OBJ)
	ar -rc  $(NAME) $(OBJ)

%.o: %.c
	$(CC) -I $(INC) $< $(CFLAGS) -o $@ -c

%.c : $(SRC)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all
