# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emmalons <emmalons@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/20 14:20:22 by emmalons          #+#    #+#              #
#    Updated: 2024/07/04 16:27:13 by emmalons         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c

OBJ = $(SRC:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror

DEPS = libft.h

all: $(NAME)

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	@echo "Library $(NAME) created."

%.o: %.c $(DEPS)
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "Compiled "$<" to "$@"."

clean:
	@/bin/rm -f $(OBJ)
	@echo "Object files removed."

fclean: clean
	@/bin/rm -f $(NAME)
	@echo "Library $(NAME) removed."

re: fclean all

.PHONY: all clean fclean re
