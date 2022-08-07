NAME		=	so_long

LIB_PATH	=	libft/

LIB			=	${LIB_PATH}libft.a

SRCS		=	${wildcard *.c}

#SRCS_BONUS	=	${wildcard bonus/*.c}

MLX_PATH	=	mlx/

MLX			=	${MLX_PATH}libmlx.a

MLXFLAGS	=	-L ${MLX_PATH} -lmlx -framework OpenGL -framework AppKit

HEADER		=	-I include/
OBJS		=	${SRCS:.c=.o}
#OBJS_BONUS	=	${SRCS_BONUS:.c=.o}

CC			=	gcc
CFLAGS		=	-Wall -Werror -Wextra -fsanitize=address ${HEADER}

#ifdef WITH_BONUS
#	OBJS_FILES = $(OBJS_BONUS)
#else
	OBJS_FILES = $(OBJS)
#endif

.PHONY		:	all subsystem clean fclean re bonus

all			:	subsystem_mlx subsystem ${NAME}

#bonus		:
#				make WITH_BONUS=1 all

subsystem_mlx:	
				make -C ${MLX_PATH} all

subsystem	:	
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

