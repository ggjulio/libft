NAME = libft.a

SRC =	$(wildcard *.c)

OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME): $(SRC)
	@gcc -Wall -Wextra -Werror -c $(SRC) && ar rc $(NAME) $(OBJ);
	@echo "Compiled";
	@ranlib $(NAME)
	@echo "Indexed";

so:
	@gcc -g -fPIC -Wall -Werror -Wextra -pedantic $(SRC) -shared -o libft.so;
	@echo ".So created";

clean:
	@/bin/rm -f $(OBJ)
	@echo ".o removed"

fclean: clean
	@/bin/rm -f $(NAME)
	@echo "lib removed"

re: fclean all

.PHONY: clean fclean re