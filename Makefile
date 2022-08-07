# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tpuma <tpuma@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/01 15:13:37 by tpuma             #+#    #+#              #
#    Updated: 2022/08/07 14:16:23 by tpuma            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ========== VARIABLES ==========


NAME = libftprintf.a
LIBFT = libft
NAME_LIBFT = libft.a

SRCS =	ft_printf.c					\
		ft_put_unsigned_nbr_base.c	\
		ft_putchar.c				\
		ft_str_len.c				\
		ft_print_number.c			\
		ft_print_str.c				\

INCLUDES = ft_printf.h
#Cuando quiero utilizar Libft sin volver a compilar todo, entinces uso --> LIB 	= -L ${PWD}/PATH -lft
OBJS = $(SRCS:.c=.o) # tiene que estar junta la declaracion porque sino elimina los .c en vez de los .o
CC = gcc
AR = ar csr #rc
CFLAGS = -Wall -Wextra -Werror -g
RM = rm -f

# Colours code
CYAN = "\\x1b[36m"
MAGENTA = "\\x1b[35m"
YELLOW = "\\x1b[33m"
GREEN = "\\x1b[32m"
RESET = "\\x1b[37m"

# ========== RULES ==========

# rules of memory leaks
val = valgrind

SANI = -fsanitize=address -g3

%.o : %.c $(INCLUDES)
	$(CC) $(CFLAGS) -c $(SRCS)
#Applying colours to messages
	@echo "$(MAGENTA)Compilation libftprintf.a finished$(RESET)"

$(NAME) : $(OBJS)
#To compile my sub-directory LIBFT
	make -C $(LIBFT)
	cp libft/libft.a .
	mv libft.a $(NAME)
	$(AR) $(NAME) $(OBJS)
	@echo "$(CYAN)Succesfully creating library of libftprintf.a $(RESET)"

sanitize:

	@$(CC) $(FLAGS) $(SANI) $(SRCS)
	@echo "sanitize memory likes done\n"

valgrind:

	@$(val)	./libftprintf.a
	@echo "\n valgind in use xd\n"


# ========== FUNCTIONS ==========


all: $(NAME) # regla de relink del make si ya esta creado el name no volvera a crearlo
#To compile with main.c with 'gcc and to generate a.out' it must be activated => "Make out"
out: re
	$(CC) $(CFLAGS) ft_printf.c libftprintf.a $(LIBFT)/libft.a
	./a.out

clean:
	@$(RM) $(OBJS) ./a.out
	@echo "$(GREEN)cleaning libftprintf.a finished$(RESET)"

fclean:	clean
	@$(RM) $(NAME)
	@$(RM) libft.a
	@echo "$(GREEN)forced cleaning libftprintf.a finished$(RESET)"
	make fclean -C $(LIBFT)

re: fclean all


.PHONY: clean fclean re
