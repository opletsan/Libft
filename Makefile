# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: opletsan <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/15 21:05:25 by opletsan          #+#    #+#              #
#    Updated: 2017/11/15 21:10:52 by opletsan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FLAG = -Wall -Wextra -Werror

SRC = ft_itoa.c \
		ft_memcpy.c \
		ft_putstr.c \
		ft_striter.c \
		ft_strnstr.c \
		ft_lstadd.c \
		ft_memdel.c \
		ft_putstr_fd.c \
		ft_striteri.c \
		ft_strrchr.c \
		ft_lstdel.c \
		ft_memmove.c \
		ft_range.c \
		ft_strjoin.c \
		ft_strrev.c \
		ft_abs.c \
		ft_lstdelone.c \
		ft_memset.c \
		ft_sqrt.c \
		ft_strlcat.c \
		ft_strsplit.c \
		ft_atoi.c \
		ft_lstfree.c \
		ft_numlen.c	\
		ft_strcat.c \
		ft_strlen.c \
		ft_strstr.c \
		ft_bzero.c \
		ft_lstiter.c \
		ft_power.c \
		ft_strchr.c \
		ft_strmap.c \
		ft_strsub.c \
		ft_isalnum.c \
		ft_lstmap.c \
		ft_putchar.c \
		ft_strclr.c \
		ft_strmapi.c \
		ft_strtrim.c \
		ft_isalpha.c \
		ft_lstnew.c \
		ft_putchar_fd.c \
		ft_strcmp.c \
		ft_strncat.c \
		ft_tolower.c \
		ft_isascii.c \
		ft_memalloc.c \
		ft_putendl.c \
		ft_strcpy.c \
		ft_strncmp.c \
		ft_toupper.c \
		ft_isdigit.c \
		ft_memccpy.c \
		ft_putendl_fd.c \
		ft_strdel.c \
		ft_strncpy.c \
		ft_isprime.c \
		ft_memchr.c \
		ft_putnbr.c \
		ft_strdup.c \
		ft_strnequ.c \
		ft_isprint.c \
		ft_memcmp.c \
		ft_putnbr_fd.c \
		ft_strequ.c \
		ft_free.c \
		ft_strnew.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
	gcc -c $(FLAG) $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -f a.out
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all fclean clean re
