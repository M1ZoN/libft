 NAME = libft.a

 SRC_FILES = ft_bzero.c ft_memccpy.c ft_memchr.c ft_memcmp.c \
			 ft_memcpy.c ft_memmove.c ft_memset.c
 
 INC = includes/
 
 OBJ = ft_bzero.o ft_memccpy.o ft_memchr.o ft_memcmp.o \
	   ft_memcpy.o ft_memmove.o ft_memset.o

 FLAGS = -Wall -Werror -Wextra

 all: $(NAME)

 $(NAME): 
 		@gcc $(FLAGS) -I $(INC) -c $(SRC_FILES) libft.h
		@ar rc $(NAME) $(OBJ)
		@ranlib $(NAME)

 clean:
		@/bin/rm -f $(OBJ)

 fclean:
		@/bin/rm -f $(NAME)

 re: fclean all