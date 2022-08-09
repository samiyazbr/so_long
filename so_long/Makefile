NAME		=	so_long

LIB_PATH	=	libft/

LIB			=	${LIB_PATH}libft.a

SRCS		=	${wildcard *.c}

MLX_PATH	=	mlx/

MLX			=	${MLX_PATH}libmlx.a

MLXFLAGS	=	-L ${MLX_PATH} -lmlx -framework OpenGL -framework AppKit

HEADER		=	-I include/
OBJS		=	${SRCS:.c=.o}

CC			=	gcc
CFLAGS		=	-Wall -Werror -Wextra ${HEADER}


OBJS_FILES = $(OBJS)

.PHONY		:	all libft_lib clean fclean re bonus

all			:	lib_mlx libft_lib ${NAME}

lib_mlx:	
				make -C ${MLX_PATH} all

libft_lib	:	
				make -C ${LIB_PATH} all

${NAME}		:	${OBJS_FILES}
				${CC} ${CFLAGS} ${OBJS_FILES} ${LIB} ${MLXFLAGS} ${MLX} -o ${NAME}

clean		:	
				make -C ${MLX_PATH} clean
				make -C ${LIB_PATH} clean
				rm -rf ${OBJS}

fclean		:	clean
				make -C ${LIB_PATH} fclean
				rm -rf ${NAME}

re			:	fclean all

