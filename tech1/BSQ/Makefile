##
## EPITECH PROJECT, 2020
## File
## File description:
## Main makefile
##

SRC		=	main.c						\
			structure/new_table.c		\
			structure/bsq.c

NAME	=	bsq

LIB		=	/lib/

MY		=	include/

CFLAGS	+=	-I./$(MY) -L.$(LIB) -lmy

TEST	=	unit_tests

.PHONY:		all
all:
			make -C./lib/ all
			cp -f lib/my/headers/*.h $(MY)
			gcc -o $(NAME) $(SRC) $(CFLAGS)

.PHONY:		clean
clean:
			make -C./lib/ clean

.PHONY:		fclean
fclean:		clean
			rm -f $(NAME)
			rm -f $(MY)*.h
			make -C lib/ fclean

.PHONY:		re
re:			fclean all
			make -C./lib/ re
