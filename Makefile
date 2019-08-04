# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mislamov <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/24 16:49:08 by mislamov          #+#    #+#              #
#    Updated: 2019/08/03 11:23:00 by mislamov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c
SRC += ft_isdigit.c ft_isprint.c ft_memccpy.c ft_memchr.c ft_memcmp.c
SRC += ft_memcpy.c ft_memmove.c ft_memset.c ft_strcat.c ft_strchr.c
SRC += ft_strcmp.c ft_strcpy.c ft_strdup.c ft_strlcat.c ft_strlen.c
SRC += ft_strncat.c ft_strncmp.c ft_strncpy.c ft_strnstr.c ft_strrchr.c
SRC += ft_strstr.c ft_tolower.c ft_toupper.c ft_itoa.c ft_memalloc.c
SRC += ft_memdel.c ft_putchar_fd.c ft_putchar.c ft_putendl_fd.c
SRC += ft_putendl.c ft_putnbr_fd.c ft_putnbr.c ft_putstr_fd.c
SRC += ft_strclr.c ft_strdel.c ft_strequ.c ft_striter.c ft_striteri.c
SRC += ft_strjoin.c ft_strmap.c ft_strmapi.c ft_strnequ.c ft_strnew.c
SRC += ft_strsplit.c ft_strsub.c ft_strtrim.c ft_putstr.c

INC = libft.h

OBJ = *.o

FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	@gcc -c $(FLAGS) $(SRC) -I $(INC)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

clean:
	@/bin/rm -f $(OBJ)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
