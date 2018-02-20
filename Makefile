##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Makefile
##

SRC	=	$(SRC_DIR)main.c \
		$(SRC_DIR)my_bsq.c \
		$(SRC_DIR)con.c \
		$(SRC_DIR)mem_array.c \
		$(SRC_DIR)parsing.c

SRC_DIR	=	src/

INC_DIR	=	include/

LIB_DIR	=	lib/

OBJ=            $(SRC:.c=.o)

CFLAGS	=	-W -Wall -Wextra -Werror -I $(INC_DIR) -g

LDFLAGS	=	-L $(LIB_DIR) -lmy

NAME=           bsq

all:            $(NAME)

$(NAME):        $(OBJ)
		make -C $(LIB_DIR)
		gcc -o $(NAME) $(OBJ) $(LDFLAGS)

clean:
		make clean -C $(LIB_DIR)
		rm -f $(OBJ)

fclean:		clean
		make fclean -C $(LIB_DIR)
		rm -f $(NAME)

re:		fclean all
