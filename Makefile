# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tpuma <tpuma@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/01 15:13:37 by tpuma             #+#    #+#              #
#    Updated: 2022/07/02 13:51:17 by tpuma            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
LIBFT = ../Libft
NAME_LIBFT = Libft.a

SRCS =	ft_pruebas.c		\
		ft_printf.c			\

INCLUDES = ft_printf.h

YELLOW = "\\x1b[33m"
GREEN = "\\x1b[32m"
RESET = "\\x1b[37m"

OBJS = $(SRCS:.c=.o)
CC = gcc
AR = ar rc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

all: $(NAME)

$(NAME) : $(OBJS)
	make -C $(LIBFT)
	@echo "$(GREEN)Compilation finished$(RESET)"
	$(AR) $@ $^

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@
	@echo "$(GREEN)Compilation finished$(RESET)"

clean:
	@$(RM) $(OBJS)
	@echo "$(YELLOW)cleaning finished$(RESET)"
fclean:	clean
	make fclean -C $(LIBFT)
	@$(RM) $(NAME)
	@echo "$(YELLOW)forced cleaning finished$(RESET)"

re: fclean all

.PHONY: clean fclean re
