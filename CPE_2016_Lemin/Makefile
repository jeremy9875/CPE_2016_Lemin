##
## Makefile for Makefile in /home/jeremy.elkaim/CPE_2016_Lemin
## 
## Made by jeremy elkaim
## Login   <jeremy.elkaim@epitech.net>
## 
## Started on  Tue Apr  4 12:00:13 2017 Kevin DA PONTE
## Last update Tue May  2 10:07:19 2017 jeremy elkaim
## Started on  Thu Apr 13 14:26:14 2017 jeremy elkaim
## Last update Thu Apr 13 14:26:26 2017 jeremy elkaim
##

CC			=	gcc

SRC			=	src/test.c			\
				src/get_next_line.c		\
				src/utils.c			\
				src/my_output.c			\
				src/display_functions.c		\
				src/file_check.c		\
				src/my_strcmp.c			\
				src/my_strcat_modified.c	\
				src/strcpy_in_2dtab.c		\

SRC_LIB			=	lib/my/my_putchar.c	\

OBJS			=	$(SRC:.c=.o)

TMP			=	$(SRC:.c=.c~)

OBJ			=	$(SRC_LIB:.c=.o)

CFLAGS			+=	-Wall -Wextra -Werror

CFLAGS			+=	-I include/

NAME			=	lem_in

LIB			=	lib/my/libmy.a

RM			=	rm -rf

all: $(LIB) $(NAME)

$(LIB): $(OBJ)
	ar rc $(LIB) $(OBJ)

$(NAME): $(OBJS)
	$(CC) -o $(NAME) $(OBJS) $(LDFLAGS)

clean:
	$(RM) $(OBJS) $(TMP)
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)
	$(RM) $(LIB)

re: fclean all

.PHONY: all debug clean fclean re
