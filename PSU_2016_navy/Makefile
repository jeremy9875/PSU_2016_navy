##
## Makefile for Makefile in /home/jeremy.elkaim/PSU_2016_navy
## 
## Made by jeremy elkaim
## Login   <jeremy.elkaim@epitech.net>
## 
## Started on  Mon Jan 30 09:03:05 2017 jeremy elkaim
## Last update Mon Jan 30 09:57:45 2017 jeremy elkaim
##

NAME    = navy

INC	= -Iinclude

SRC     = src/navy.c	\

OBJ     = $(SRC:.c=.o)

LIB	= -L. -lgnl

all:	 $(NAME)

$(NAME): $(OBJ)
	 gcc $(OBJ) $(LIB) -o $(NAME) $(INC)

clean:
	 rm -rf $(OBJ)

fclean:	 clean
	 rm -rf $(NAME)

re:	 fclean all

.PHONY:	 all clean fclean re
