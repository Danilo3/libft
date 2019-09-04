SRC = ft_memset.c ft_ischar.c
O_FILES = ft_memset.o ft_ischar.o
NAME = libft.a

all: $(NAME)

$(NAME):
	@gcc -Wall -Wextra -Werror  -c $(SRC)
	@ar rc libft.a $(O_FILES)
				
clean: 
	@rm -f $(O_FILES)

fclean: clean
	@rm libft.a

re: fclean all
