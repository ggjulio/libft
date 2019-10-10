#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/15 12:07:06 by juligonz          #+#    #+#              #
#    Updated: 2019/10/10 13:56:08 by juligonz         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libft.a
NAME_BONUS = libft_bonus.a


PART1 =	ft_memset.c				\
		ft_bzero.c				\
		ft_memcpy.c				\
		ft_memccpy.c			\
		ft_memmove.c			\
		ft_memchr.c				\
		ft_memcmp.c				\
		ft_strlen.c				\
		ft_isalpha.c			\
		ft_isdigit.c			\
		ft_isalnum.c			\
		ft_isascii.c			\
		ft_isprint.c			\
		ft_toupper.c			\
		ft_tolower.c			\
		ft_strchr.c				\
		ft_strrchr.c			\
		ft_strncmp.c			\
		ft_strlcpy.c			\
		ft_strlcat.c			\
		ft_strnstr.c			\
		ft_atoi.c				\
		ft_calloc.c				\
		ft_strdup.c				\

PART2 =	ft_substr.c				\
		ft_strjoin.c			\
		ft_strtrim.c			\
		ft_split.c				\
		ft_itoa.c				\
		ft_strmapi.c			\
		ft_putchar_fd.c			\
		ft_putstr_fd.c			\
		ft_putendl_fd.c			\
		ft_putnbr_fd.c			\

BONUS = ft_lstnew_bonus.c		\
		ft_lstadd_front_bonus.c \
		ft_lstsize_bonus.c		\
		ft_lstlast_bonus.c		\
		ft_lstadd_back_bonus.c	\
		ft_lstdelone_bonus.c	\
		ft_lstclear_bonus.c		\
		ft_lstiter_bonus.c		\
		ft_lstmap_bonus.c		\

ADDITIONNAL = ft_abs.c			\
		ft_iscntrl.c			\
		ft_isupper.c			\
		ft_isgraph.c			\
		ft_isblank.c			\
		ft_islower.c			\
		ft_isspace.c			\
		ft_isxdigit.c			\
		ft_itoa_base.c			\
		ft_labs.c				\
		ft_llabs.c				\
		ft_memdel.c				\
		ft_putchar.c			\
		ft_putendl.c			\
		ft_putnbr_base.c		\
		ft_putnbr_base_fd.c		\
		ft_putnbr.c				\
		ft_putstr.c				\
		ft_strcat.c				\
		ft_strcmp.c				\
		ft_strcpy.c				\
		ft_strncat.c			\
		ft_strncpy.c			\
		ft_strnew.c				\
		ft_strdel.c				\
		ft_strclr.c				\
		ft_striter.c			\
		ft_striteri.c			\
		ft_strmap.c				\
		ft_strequ.c				\
		ft_strnequ.c			\
		ft_strstr.c				\
		ft_print_memory.c		\


SRCS = $(PART1) $(PART2)
SRCS_BONUS = $(BONUS)
SRCS_ADD = $(ADDITIONNAL)

OBJ = $(SRCS:.c=.o)
OBJ_BONUS = $(SRCS_BONUS:.c=.o)
OBJ_ADD = $(SRCS_ADD:.c=.o)

CFLAGS = -Wall -Wextra -Werror

all: $(NAME) $(NAME_BONUS)

$(NAME): $(OBJ) $(OBJ_ADD) $(OBJ_BONUS)
	@ar rc $(NAME) $(OBJ) $(OBJ_ADD) $(OBJ_BONUS)
	$(info Compiled $(NAME))
	@ranlib $(NAME)

$(NAME_BONUS): $(OBJ_BONUS)
	@ar rc $(NAME_BONUS) $(OBJ_BONUS)
	$(info Compiled $(NAME_BONUS))
	@ranlib $(NAME_BONUS)

clean:
	@rm -f $(OBJ) $(OBJ_BONUS) $(OBJ_ADD) 
	$(info .o removed !)

fclean: clean
	@rm -f $(NAME) $(NAME_BONUS)
	$(info libs removed !)

bonus: $(NAME_BONUS)

re: fclean all

.PHONY: clean fclean re all bonus 