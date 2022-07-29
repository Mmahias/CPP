SRCS	= main.cpp

NAME	= this_is_brain

CC		= clang++

CFLAGS	= -Wall -Werror -Wextra -std=c++98

all:	$(NAME)

$(NAME):
		${CC} ${CFLAGS} ${SRCS} -o ${NAME}

clean:	
		rm -f ${NAME}

fclean: clean

re:		fclean all

.PHONY: all re clean fclean