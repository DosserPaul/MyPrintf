##
## EPITECH PROJECT, 2020
## MAKEFILE
## File description:
## Mikefile
##

SRC	=	my_putchar.c				\
		my_isneg.c					\
		my_swap.c					\
		my_strlen.c					\
		my_putstr.c					\
		my_getnbr.c					\
		my_strcpy.c					\
		my_strncpy.c				\
		my_strcat.c					\
		my_strncat.c				\
		my_put_nbr.c				\
		my_compute_power_rec.c		\
		my_compute_square_root.c	\
		my_find_prime_sup.c			\
		my_is_prime.c				\
		my_revstr.c					\
		my_showmem.c				\
		my_showstr.c				\
		my_sort_int_array.c			\
		my_str_isalpha.c			\
		my_str_isnum.c				\
		my_str_isprintable.c		\
		my_str_isupper.c			\
		my_str_islower.c			\
		my_strcapitalize.c			\
		my_strcmp.c					\
		my_strlowcase.c				\
		my_strncmp.c				\
		my_strstr.c					\
		my_strupcase.c

MY	=	my.h

LIB	=	libmy.a

OBJ	=	$(SRC:.c=.o)

NAME	=	prog

all: executeEverything

executeEverything: createLib copyMy

re: cleanAll all

clean:
	@rm -f $(OBJ)

createLib: $(OBJ)
	@ar rc $(LIB) $(OBJ)

fclean:
	rm -f $(MY)

copyMy:	$(MY)
	rm -fr ../../includes/$(MY)
	cp $(MY) ../../includes/$(MY)

copyLib:
	cp $(LIB) ../$(LIB)

cleanAll:
	rm $(OBJ) ../$(LIB) ../../include/$(LIB)