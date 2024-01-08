NAME 	=	push_swap

CC 		=	cc

HEADER 	=	push_swap.h

CFLAGS 	= 	-Wall -Wextra -Werror  -g -fsanitize=address #-Wpointer-integer-compare

SRC 	=	parssing.c \
			ft_atoi.c \
			ft_split.c \
			ft_strjoin.c \
			lst_add_back.c \
			lst_add_front.c \
			lst_last.c \
			lst_new.c \
			list.c \
			ft_print_list.c\
			lst_delone.c \
			lst_size.c \
			push.c \
			rotate.c \
			swap.c \
			rev_rotate.c \

OBJ 	= 	${SRC:.c=.o}

all: ${NAME}

%.o : %.c $(HEADER)
	${CC} ${CFLAGS} ${CFLAGS} -c $< -o $@

${NAME} : ${OBJ}
	${CC} ${CFLAGS} ${OBJ} -o ${NAME}

clean :
	rm -f ${OBJ}

re: fclean all

fclean : clean
	rm -f ${NAME}
	
.PHONY: all clean fclean re