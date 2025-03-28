NAME		=	so_long
CC			=	gcc
FLAGS		=	-Wall -Wextra -Werror
MLX			=	$(INC)/libmlx_Linux.a
MLX_MAKE	=	minilibx-linux
INC			=	./minilibx-linux
LIB			=	$(MLX) -lXext -lX11 -lm -lz
OBJ			=	$(patsubst src%, obj%, $(SRC:.c=.o))
SRC			=	minilibx/1_deneme.c 

all:		$(MLX) $(LFT) $(OBJ) $(NAME)

$(NAME):	$(OBJ)
			$(CC) $(FLAGS) -o $@ $^ $(LIB)

$(MLX):
			@make -s -C $(MLX_MAKE)


obj:
			@mkdir -p obj

obj/%.o:	src/%.c
			$(CC) $(FLAGS) $(INC) -o $@ -c $<

clean:
			@rm -rf $(OBJ) obj
			@echo "object files removed."

fclean:		clean
			@rm -rf $(NAME)
			@echo "binary file removed."

re:			fclean all

.PHONY:		all clean fclean re
