# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: telain <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/26 17:08:50 by telain            #+#    #+#              #
#    Updated: 2016/03/10 19:12:45 by telain           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

C_GREEN = "\033[0;32m"
C_NOCOLOR = "\033[0m"
NAME = libft.a
HEADER = includes/libft.h
FLAG = -Wall -Werror -Wextra
SRC_DIR = src
SRC_BASE = ft_putstr.c ft_putchar.c ft_strdup.c ft_strlcpy.c ft_strlcat.c\
	  ft_strlen.c ft_strcpy.c ft_strncpy.c ft_strcat.c ft_strncat.c\
	  ft_strchr.c ft_strstr.c ft_strnstr.c ft_strcmp.c ft_strrchr.c\
	  ft_bzero.c ft_memset.c ft_memccpy.c ft_memcmp.c ft_memmove.c\
	  ft_memcpy.c ft_memchr.c ft_isalpha.c ft_isdigit.c ft_isalnum.c\
	  ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c ft_memalloc.c\
	  ft_memdel.c ft_strnew.c ft_strdel.c ft_strclr.c ft_striter.c\
	  ft_striteri.c ft_strmap.c ft_strmapi.c ft_strequ.c ft_strnequ.c\
	  ft_strsub.c ft_strjoin.c ft_strtrim.c ft_itoa.c ft_atoi.c ft_strncmp.c\
	  ft_putchar_fd.c ft_putstr_fd.c ft_putnbr_fd.c ft_putendl_fd.c\
	  ft_strsub.c ft_putnbr.c ft_putendl.c ft_strsplit.c ft_lstadd.c\
	  ft_lstdel.c ft_lstdelone.c ft_lstiter.c ft_lstmap.c ft_lstnew.c\
	  ft_atoi.c ft_factorial.c ft_isspace.c ft_putnendl.c\
	  ft_sqrt.c

SRC = $(addprefix $(SRC_DIR)/, $(SRC_BASE))

OBJ = $(patsubst %.c, %.o, $(SRC_BASE))

$(NAME):
	@echo Compiling Libft ...
	@gcc $(FLAG) -c -I $(HEADER) $(SRC)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	@echo $(C_GREEN)//Libft succesfully compiled//$(C_NOCOLOR)

all: $(NAME)

clean: 
	@rm -rf $(OBJ)
	
fclean: clean
	@rm -rf $(NAME)

re: fclean all
