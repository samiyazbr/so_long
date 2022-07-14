NAME=so_long
CC=gcc
OBJ=so_long.o
%.o: %.c
	$(CC) -Wall -Wextra -Werror -Imlx -c $< -o $@
$(NAME): $(OBJ)
	make -C mlx
	mv mlx/libmlx.dylib .
	$(CC) $(OBJ) -L. -lmlx -framework OpenGL -framework AppKit -o $(NAME)
all :$(NAME) 

norm :
	norminette
clean :
	rm -f $(OBJ)
fclean : clean
	rm -f $(NAME)
re : fclean all