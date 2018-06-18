# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pvan-ren <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/19 17:18:53 by pvan-ren          #+#    #+#              #
#    Updated: 2018/06/09 18:05:12 by pvan-ren         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = clang
CFLAGS = -Wall -Wextra -Werror -I includes/

SRC = ft_lstadd.c \
	  	ft_lstdel.c \
		ft_lstdelone.c \
		ft_lstiter.c \
		ft_lstmap.c \
		ft_lstnew.c \
		ft_strlcat.c \
	  	ft_abs.c \
		ft_putbyte.c \
	  	ft_intlen.c \
		ft_strlen.c \
		ft_strnlen.c \
		ft_strcmp.c \
		ft_strncmp.c \
		ft_atoi.c \
		ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_memcmp.c \
		ft_isprint.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_strequ.c \
		ft_strnequ.c \
		ft_strtrim.c \
		ft_strsub.c \
		ft_strjoin.c \
		ft_strsplit.c \
		ft_itoa.c \
		ft_strcpy.c \
		ft_strdup.c \
		ft_strncpy.c \
		ft_strcat.c \
		ft_strncat.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strstr.c \
		ft_strnstr.c \
		ft_strnew.c \
		ft_strmap.c \
		ft_strmapi.c \
		ft_putchar.c \
		ft_putstr.c \
		ft_putendl.c \
		ft_putnbr.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memccpy.c \
		ft_memmove.c \
		ft_memchr.c \
		ft_memalloc.c \
		ft_memdel.c \
		ft_strclr.c \
		ft_strdel.c \
		ft_striter.c \
		ft_striteri.c

O_PATH = ./Safe/

OBJ := $(addprefix $(O_PATH), $(SRC:.c=.o))
DEP := $(addprefix $(O_PATH), $(SRC:.c=.d))

all: $(NAME)

$(NAME) : $(OBJ)
	ar rc $@ $?
	ranlib $(NAME)

$(O_PATH)%.o : %.c
	@mkdir -p $(O_PATH)
	$(CC) $(CFLAGS) -MMD -c $< -o $@

-include $(DEP)

$(SO_PATH)%.o : %.c
	@mkdir -p $(SO_PATH)
	$(CC) $(CFLAGS) -fpic -c $< -o $@

clean :
	rm -rf $(O_PATH)

fclean : clean
	rm -f $(NAME)

re : fclean all
