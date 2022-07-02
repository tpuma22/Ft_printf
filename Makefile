# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tpuma <tpuma@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/01 15:13:37 by tpuma             #+#    #+#              #
#    Updated: 2022/07/02 21:35:46 by tpuma            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ========== VARIABLES ==========

NAME = libftprintf.a
LIBFT = libft/
NAME_LIBFT = libft.a

SRCS =	ft_printf.c		\
		#ft_pruebas.c

INCLUDES = ft_printf.h
#Cuando quiero utilizar Libft sin volver a compilar todo, entinces uso --> LIB 	= -L ${PWD}/PATH -lft
OBJS = $(SRCS:.c=.o)
CC = gcc
AR = ar rc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

CYAN = "\\x1b[36m"
MAGENTA = "\\x1b[35m"
YELLOW = "\\x1b[33m"
GREEN = "\\x1b[32m"
RESET = "\\x1b[37m"

# ========== RULES ==========

%.o : %.c $(INCLUDES)
	$(CC) $(CFLAGS) -c $(SRCS)
	@echo "$(MAGENTA)Compilation libftprintf.a finished$(RESET)"

$(NAME) : $(OBJS)
	make -C $(LIBFT)
	$(AR) $@ $^
	@echo "$(CYAN)Succesfully creating library of libftprintf.a $(RESET)"


# ========== FUNCTIONS ==========

all: $(NAME)

out: re
	$(CC) $(CFLAGS) ft_printf.c libftprintf.a $(LIBFT)libft.a
	./a.out

clean:
	@$(RM) $(OBJS) ./a.out
	@echo "$(GREEN)cleaning libftprintf.a finished$(RESET)"

fclean:	clean
	@$(RM) $(NAME)
	@echo "$(GREEN)forced cleaning libftprintf.a finished$(RESET)"
	make fclean -C $(LIBFT)

re: fclean all

.PHONY: clean fclean re
