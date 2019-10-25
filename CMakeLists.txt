cmake_minimum_required(VERSION 3.14)
project(libft3)

add_executable(lft3_test_strlcat    minunit.c ft_strlcat.c test_ft_strlcat.c ft_strlen.c)
add_executable(lft3_test_strnstr    minunit.c ft_strnstr.c test_ft_strnstr.c ft_strlen.c ft_str_startswith.c)
add_executable(lft3_test_strtrim    minunit.c ft_strtrim.c ft_strlen.c test_ft_strtrim.c ft_strncpy.c ft_strnew.c ft_bzero.c)
add_executable(lft3_test_strsplit   minunit.c ft_strsplit.c test_ft_strsplit.c ft_strnew.c ft_bzero.c ft_strlen.c ft_strncpy.c ft_memset.c)
add_executable(lft3_test_itoa       minunit.c ft_itoa.c test_ft_itoa.c ft_itostr.c ft_count_digits.c ft_strnew.c ft_strrev.c ft_strlen.c ft_bzero.c ft_strcpy.c ft_free_mtrx.c)
add_executable(lft3_test_lstmap     minunit.c ft_lstmap.c test_ft_lstmap.c ft_lstadd.c ft_lstnew.c ft_strlen.c ft_lstlen.c ft_memmove.c ft_memcpy.c ft_strdup.c ft_strcpy.c ft_lstdel.c ft_lstdelone.c ft_memrcpy.c)
add_executable(lf3_test_strncmp     minunit.c ft_strncmp.c test_ft_strncmp.c)
add_executable(lf3_test_putnbr      minunit.c ft_putnbr_fd.c test_ft_putnbr_fd.c ft_putchar_fd.c ft_putstr_fd.c ft_putchar.c)
add_executable(lft_test_ft_atoi     minunit.c ft_atoi.c test_ft_atoi.c ft_isdigit.c ft_isspace.c)
add_executable(lf3_test_ft_memove   minunit.c ft_memmove.c test_ft_memove.c ft_memcpy.c ft_memrcpy.c)
add_executable(lf3_test_ft_strnlen  minunit.c ft_strnlen.c test_ft_strnlen.c)
add_executable(lft3_test_ft_power   minunit.c ft_power.c test_ft_power.c)
add_executable(lft3_test_ft_bzero   minunit.c ft_bzero.c test_ft_bzero.c)

file(GLOB_RECURSE FT_FILES "${PROJECT_SOURCE_DIR}/ft_*.c")

add_executable(lft3_main main.c ${FT_FILES})

#target_link_libraries(test_lft2 /Users/ayellin/21/tasks/libft2/libft.a)
