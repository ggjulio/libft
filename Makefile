NAME = libft.a

SRC =	$(wildcard *.c)

OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME): $(SRC)
	@gcc -Wall -Wextra -Werror -c $(SRC) && ar rc $(NAME) $(OBJ);
	@echo "Compiled";

clean:
	@/bin/rm -f $(OBJ)
	@echo ".o removed"

fclean: clean $(NAME)
	@/bin/rm -f $(NAME)
	@echo "lib removed"

re: fclean all