# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mislamov <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/24 16:49:08 by mislamov          #+#    #+#              #
#    Updated: 2019/07/24 16:49:10 by mislamov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a

SRC_FILES=ft_memset.c ft_memccpy.c ft_memchr.c \
		  ft_memcpy.c ft_bzero.c ft_memcmp.c \
		  ft_memmove.c ft_memset.c

INC=includes/libft.h

OBJ=*.o

FLAGS=-Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	@gcc -c $(FLAGS) $(SRC_FILES) -I $(INC)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

clean:
	@/bin/rm -f $(OBJ)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
