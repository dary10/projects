# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dsalca <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/03 14:46:33 by dsalca            #+#    #+#              #
#    Updated: 2016/01/12 14:01:46 by dsalca           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isprint.c \
ft_isspace.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memcpy2.c \
ft_memmove.c ft_memset.c ft_strchr.c ft_strnstr.c ft_strcat.c ft_strcmp.c \
ft_strcpy.c ft_strdup.c ft_strlcat.c ft_strlen.c ft_strncat.c ft_strncmp.c \
ft_strncpy.c ft_strstr.c ft_tolower.c ft_toupper.c ft_memalloc.c ft_memdel.c \
ft_putchar_fd.c ft_putchar.c ft_putendl_fd.c ft_putendl.c ft_putnbr_fd.c \
ft_putnbr.c ft_putstr_fd.c ft_putstr.c ft_strdel.c ft_striter.c ft_striteri.c \
ft_strjoin.c ft_strmap.c ft_strmapi.c ft_strequ.c ft_strnequ.c ft_strnew.c \
ft_strsub.c ft_strclr.c ft_strtrim.c ft_strrchr.c ft_isdigit.c ft_itoa.c \
ft_strsplit.c ft_memcpy_bwd.c ft_strlen_plus.c

OBJ = ft_atoi.o ft_bzero.o ft_isalnum.o ft_isalpha.o ft_isascii.o ft_isprint.o \
ft_isspace.o ft_memccpy.o ft_memchr.o ft_memcmp.o ft_memcpy.o ft_memcpy2.o \
ft_memmove.o ft_memset.o ft_strchr.o ft_strnstr.o ft_strcat.o ft_strcmp.o \
ft_strcpy.o ft_strdup.o ft_strlcat.o ft_strlen.o ft_strncat.o ft_strncmp.o \
ft_strncpy.o ft_strstr.o ft_tolower.o ft_toupper.o ft_memalloc.o ft_memdel.o \
ft_putchar_fd.o ft_putchar.o ft_putendl_fd.o ft_putendl.o ft_putnbr_fd.o \
ft_putnbr.o ft_putstr_fd.o ft_putstr.o ft_strdel.o ft_striter.o ft_striteri.o \
ft_strjoin.o ft_strmap.o ft_strmapi.o ft_strequ.o ft_strnequ.o ft_strnew.o \
ft_strsub.o ft_strclr.o ft_strtrim.o ft_strrchr.o ft_isdigit.o ft_itoa.o \
ft_strsplit.o ft_memcpy_bwd.o ft_strlen_plus.o

all:
	gcc -c -Wall -Wextra -Werror $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	-rm -r $(OBJ)

fclean:	clean
	-rm -r $(NAME)

re: fclean all
