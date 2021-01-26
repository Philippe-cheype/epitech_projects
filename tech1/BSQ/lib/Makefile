##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Library builder makefile
##

SRC		=		my/my_getnbr.c			\
				my/my_strlen.c			\
				my/check_empty_spots.c	\
				my/get_coords.c			\
				my/place_square.c		\
				my/free_memory.c		\
				my/search_pos.c

OBJ		=		$(SRC:.c=.o)

NAME	=		libmy.a

all:			$(NAME)

$(NAME):		$(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:			clean
	rm -f $(NAME)

re:				fclean all