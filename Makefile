SRC	=						\
ft_printf.c					\
utils/ft_putnbr_base.c		\
utils/ft_putnbr_unsigned.c	\
utils/printf_utils.c

NAME		=	libftprintf.a
INCS		=	./includes

SDIR		=	./src
SRCS		=	$(addprefix ${SDIR}/,${SRC})
ODIR		=	./out
OBJS		=	$(patsubst ${SDIR}/%,${ODIR}/%,${SRCS:.c=.o})

CC			=	gcc
CFLAGS		=	-Wall -Wextra -Werror -I ${INCS}
RM			=	rm -rf

all: ${NAME}

${ODIR}/%.o: ${SDIR}/%.c ${INCS}/ft_printf.h Makefile
	@mkdir -p ${@D}
	${CC} ${CFLAGS} -c $< -o $@

${NAME}: ${OBJS}
	ar -crs ${NAME} ${OBJS}

clean:
	${RM} ${ODIR}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
