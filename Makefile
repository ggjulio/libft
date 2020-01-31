#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/15 12:07:06 by juligonz          #+#    #+#              #
#    Updated: 2020/01/31 15:23:21 by juligonz         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libft.a

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

BONUS = ft_lstnew.c				\
		ft_lstadd_front.c		\
		ft_lstsize.c			\
		ft_lstlast.c			\
		ft_lstadd_back.c		\
		ft_lstdelone.c			\
		ft_lstclear.c			\
		ft_lstiter.c			\
		ft_lstmap.c				\

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
		ft_strndup.c			\
		ft_print_memory.c		\
		gnl/get_next_line.c		\
		ft_valid_extention.c	\
		ft_in_charset.c			\
		ft_isnumber.c			\

#FT_PRINTF =  ft_printf/srcs/ft_printf.c			  \
        ft_printf/srcs/ft_dprintf.c               \
        ft_printf/srcs/ft_sprintf.c               \
        ft_printf/srcs/ft_asprintf.c              \
        ft_printf/srcs/ft_strdup_cat.c            \
        ft_printf/srcs/cast_len_modifier.c        \
        ft_printf/srcs/read_flags.c               \
        ft_printf/srcs/parse.c                    \
        ft_printf/srcs/double_utils.c             \
        ft_printf/srcs/double_utils_2.c           \
        ft_printf/srcs/double_validation.c        \
        ft_printf/srcs/write_buffer.c             \
        ft_printf/srcs/lib/ft_strlen.c            \
       ft_printf/srcs/lib/ft_strncpy.c           \
        ft_printf/srcs/lib/ft_isdigit.c           \
        ft_printf/srcs/lib/ft_memset.c            \
        ft_printf/srcs/put/put_dec.c              \
        ft_printf/srcs/put/put_hex.c              \
        ft_printf/srcs/put/put_oct.c              \
        ft_printf/srcs/put/put_ptr.c              \
        ft_printf/srcs/put/put_double.c           \
        ft_printf/srcs/put/put_e.c                \
        ft_printf/srcs/put/put_g.c                \
        ft_printf/srcs/convs/conv_c.c             \
        ft_printf/srcs/convs/conv_s.c             \
        ft_printf/srcs/convs/conv_p.c             \
        ft_printf/srcs/convs/conv_d.c             \
        ft_printf/srcs/convs/conv_i.c             \
        ft_printf/srcs/convs/conv_u.c             \
        ft_printf/srcs/convs/conv_x_lowcase.c     \
        ft_printf/srcs/convs/conv_x_upcase.c      \
        ft_printf/srcs/convs/conv_n.c             \
        ft_printf/srcs/convs/conv_f.c             \
        ft_printf/srcs/convs/conv_g.c             \
        ft_printf/srcs/convs/conv_e.c             \
        ft_printf/srcs/convs/conv_o.c             \
        ft_printf/srcs/convs/conv_mod.c           \


SRCS = $(PART1) $(PART2)
SRCS_BONUS = $(BONUS)
SRCS_ADD = $(ADDITIONNAL)		#$(FT_PRINTF)

OBJ = $(SRCS:.c=.o)
OBJ_BONUS = $(SRCS_BONUS:.c=.o)
OBJ_ADD = $(SRCS_ADD:.c=.o)

CFLAGS = -Wall -Wextra -Werror -g #-I./ft_printf/includes

all: $(NAME) $(NAME_BONUS)

libs:
	@make -s -C ft_printf/
	@mv ft_printf/libftprintf.a ./$(NAME)

$(NAME): $(OBJ) $(OBJ_ADD) $(OBJ_BONUS)
	@make libs
	@ar rcs $(NAME) $(OBJ) $(OBJ_ADD) $(OBJ_BONUS)
	$(info Compiled $(NAME))

clean:
	@rm -f $(OBJ) $(OBJ_BONUS) $(OBJ_ADD) 
	@make clean -s -C ft_printf/
	$(info .o removed !)

fclean: clean
	@rm -f $(NAME)
	$(info lib removed !)

bonus: $(NAME)

re: fclean all

.PHONY: clean fclean re all bonus