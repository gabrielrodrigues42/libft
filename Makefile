# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gandrade <gandrade@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/18 01:33:41 by gandrade          #+#    #+#              #
#    Updated: 2021/12/29 12:54:24 by gandrade         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

LIB = ar -rcs

CC = gcc
CFLAGS = -Wall -Wextra -Werror

RM = rm -rf
MKDIR = mkdir -p

INCLUDE_DIR = ./include
INCLUDE = $(addprefix -I, $(INCLUDE_DIR))

SRC_DIR = ./src
OBJ_DIR = ./obj

SRC_FILES = ft_atof.c \
            ft_atoi.c \
            ft_bzero.c \
            ft_calloc.c \
            ft_htoa.c \
            ft_isalnum.c \
            ft_isalpha.c \
            ft_isascii.c \
            ft_isdigit.c \
            ft_isprint.c \
            ft_isspace.c \
            ft_itoa.c \
            ft_lst2c_add_back.c \
            ft_lst2c_add_front.c \
            ft_lst2c_clear.c \
            ft_lst2c_last.c \
            ft_lst2c_new.c \
            ft_lst2c_size.c \
            ft_lstadd_back.c \
            ft_lstadd_front.c \
            ft_lstclear.c \
            ft_lstdelone.c \
            ft_lstiter.c \
            ft_lstlast.c \
            ft_lstmap.c \
            ft_lstnew.c \
            ft_lstsize.c \
            ft_memccpy.c \
            ft_memchr.c \
            ft_memcmp.c \
            ft_memcpy.c \
            ft_memmove.c \
            ft_memset.c \
            ft_printf_chars.c \
            ft_printf_numbers.c \
            ft_printf.c \
            ft_ptoa.c \
            ft_putchar_fd.c \
            ft_putendl_fd.c \
            ft_putnbr_fd.c \
            ft_putstr_fd.c \
            ft_split.c \
            ft_strchr.c \
            ft_strclear.c \
            ft_strclear2.c \
            ft_strcmp.c \
            ft_strdup.c \
            ft_strjoin.c \
            ft_strlcat.c \
            ft_strlcpy.c \
            ft_strlen.c \
            ft_strmapi.c \
            ft_strncmp.c \
            ft_strnstr.c \
            ft_strnstr.c \
            ft_strrchr.c \
            ft_strtolower.c \
            ft_strtrim.c \
            ft_substr.c \
            ft_tolower.c \
            ft_toupper.c \
            ft_utoa.c \
            get_next_line.c \

SRC = $(addprefix $(SRC_DIR)/, $(SRC_FILES))
OBJ = $(subst $(SRC_DIR), $(OBJ_DIR), $(SRC:.c=.o))

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	$(MKDIR) $(OBJ_DIR)
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

$(NAME): $(OBJ)
	$(LIB) $(NAME) $(OBJ)

all: $(NAME)

clean:
	$(RM) $(OBJ_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
