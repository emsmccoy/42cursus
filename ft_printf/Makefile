# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emmalons <emmalons@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/02 21:20:22 by emmalons          #+#    #+#              #
#    Updated: 2024/08/02 21:27:13 by emmalons         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = srcs/ft_printf.c srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_putnbr.c srcs/ft_putnbr_unsigned.c srcs/ft_puthex.c srcs/ft_putptr.c
OBJS = $(SRCS:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror -I./includes/

RM = rm -rf

DEPS = includes/ft_printf.h includes/libft.h

all: $(NAME)

$(NAME): $(OBJS)
	$(MAKE) -C ./libft
	cp libft/libft.a $(NAME)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)
	@echo "Library $(NAME) created."

%.o: %.c $(DEPS)
	$(CC) $(CFLAGS) -c $< -o $@
	@echo "Compiled "$<" to "$@"."

clean:
	$(MAKE) clean -C ./libft
	$(RM) $(OBJS)
	@echo "Object files removed."

fclean: clean
	$(MAKE) fclean -C ./libft
	$(RM) $(NAME)
	@echo "Library $(NAME) removed."

re: fclean all

.PHONY: all clean fclean re
