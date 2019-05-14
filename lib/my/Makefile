##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Puigsagur
##

CC		=	gcc

CFLAGS	=	-Wall -Wextra -W

SRC		=	my_str_to_word_array.c	\
			my_malloc.c				\
			sum_stdarg.c			\
			disp_stdarg.c 			\
			my_compute_power.c  	\
			my_compute_power_rec.c	\
			my_find_prime_sup.c		\
			my_is_prime.c			\
			my_find_is_prime.c		\
			my_isneg.c				\
			my_put_nbr.c			\
			my_putchar.c 			\
			my_putstr.c				\
			my_revstr.c				\
			my_sort_int_array.c		\
			my_str_isalpha.c		\
			my_str_islower.c		\
			my_str_isnum.c			\
			my_str_isprintable.c	\
			my_str_isupper.c		\
			my_strcapitalize.c		\
			my_strcat.c				\
			my_strcmp.c				\
			my_strcpy.c				\
			my_strlen.c				\
			my_strlowcase.c			\
			my_strncat.c			\
			my_strncmp.c			\
			my_strncpy.c			\
			my_strstr.c				\
			my_strupcase.c			\
			my_swap.c				\

OBJ		=	$(SRC:.c=.o)

NAME	=	libmy.a

all: $(NAME)

$(NAME):
	gcc -c *.c
	ar rc libmy.a *.o
	rm -f $(OBJ)
	rm *.o
	##mv libmy.a ../../

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
