#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/15 12:07:06 by juligonz          #+#    #+#              #
#    Updated: 2019/10/08 17:39:46 by juligonz         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libft.a

SRCS =	ft_abs.c			\
	ft_atoi.c			\
	ft_bzero.c			\
	ft_isalnum.c			\
	ft_isalpha.c			\
	ft_isascii.c			\
	ft_iscntrl.c			\
	ft_isdigit.c			\
	ft_isgraph.c			\
	ft_isblank.c			\
	ft_islower.c			\
	ft_isprint.c			\
	ft_isspace.c			\
	ft_isupper.c			\
	ft_isxdigit.c			\
	ft_itoa_base.c			\
	ft_itoa.c			\
	ft_labs.c			\
	ft_llabs.c			\
	ft_memalloc.c			\
	ft_memccpy.c			\
	ft_memchr.c			\
	ft_memcmp.c			\
	ft_memcpy.c			\
	ft_memdel.c			\
	ft_memmove.c			\
	ft_memset.c			\
	ft_putchar.c			\
	ft_putchar_fd.c			\
	ft_putendl.c			\
	ft_putendl_fd.c			\
	ft_putnbr_base.c		\
	ft_putnbr_base_fd.c		\
	ft_putnbr.c			\
	ft_putnbr_fd.c			\
	ft_putstr.c			\
	ft_putstr_fd.c			\
	ft_strcat.c			\
	ft_strchr.c			\
	ft_strcmp.c			\
	ft_strcpy.c			\
	ft_strdup.c			\
	ft_strlcat.c			\
	ft_strlen.c			\
	ft_strncat.c			\
	ft_strncmp.c			\
	ft_strncpy.c			\
	ft_strnew.c			\
	ft_strdel.c			\
	ft_strclr.c			\
	ft_striter.c			\
	ft_striteri.c			\
	ft_strmap.c			\
	ft_strmapi.c			\
	ft_strequ.c			\
	ft_strnequ.c			\
	ft_strnstr.c			\
	ft_strsub.c			\
	ft_strjoin.c			\
	ft_strtrim.c			\
	ft_strsplit.c			\
	ft_strrchr.c			\
	ft_strstr.c			\
	ft_tolower.c			\
	ft_toupper.c			\
	ft_lstnew.c			\
	ft_lstdelone.c			\
	ft_lstdel.c			\
	ft_lstadd.c			\
	ft_lstiter.c			\
	ft_lstmap.c			\
	ft_print_memory.c	\
	ft_calloc.c			\
	ft_strlcpy.c			\


OBJ = $(SRCS:.c=.o)

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
	$(info Compiled)
	@ranlib $(NAME)
	$(info Indexed)

clean:
	@rm -f $(OBJ)
	$(info .o removed !)

fclean: clean
	@rm -f $(NAME)
	$(info lib removed !)

re: fclean all

.PHONY: clean fclean re all
