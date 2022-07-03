# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tpuma <tpuma@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/02 21:23:17 by tpuma             #+#    #+#              #
#    Updated: 2022/07/03 11:43:02 by tpuma            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC =	ft_isalpha.c		\
		ft_isdigit.c		\
		ft_isalnum.c		\
		ft_isascii.c		\
		ft_isprint.c		\
		ft_strlen.c			\
		ft_memset.c			\
		ft_bzero.c			\
		ft_memcpy.c			\
		ft_memchr.c			\
		ft_memmove.c		\
		ft_strlcpy.c		\
		ft_strlcat.c		\
		ft_toupper.c		\
		ft_tolower.c		\
		ft_atoi.c			\
		ft_strchr.c			\
		ft_strrchr.c		\
		ft_strncmp.c		\
		ft_strnstr.c		\
		ft_memcmp.c			\
		ft_strdup.c			\
		ft_calloc.c			\
		ft_substr.c			\
		ft_strjoin.c		\
		ft_strtrim.c		\
		ft_split.c			\
		ft_itoa.c			\
		ft_strmapi.c		\
		ft_striteri.c		\
		ft_putchar_fd.c		\
		ft_putstr_fd.c		\
		ft_putendl_fd.c		\
		ft_putnbr_fd.c		\

SRC_BONUS =	ft_lstnew_bonus.c			\
			ft_lstadd_front_bonus.c		\
			ft_lstsize_bonus.c			\
			ft_lstlast_bonus.c			\
			ft_lstadd_back_bonus.c		\
			ft_lstdelone_bonus.c		\
			ft_lstclear_bonus.c			\
			ft_lstiter_bonus.c			\
			ft_lstmap_bonus.c			\

INCLUDES = libft.h

CYAN = "\\x1b[36m"
MAGENTA = "\\x1b[35m"
YELLOW = "\\x1b[33m"
GREEN = "\\x1b[32m"
RESET = "\\x1b[37m"

OBJ = $(SRC:.c=.o)

OBJ_BONUS = $(SRC_BONUS:.c=.o)

CC = gcc
AR = ar rc
CFLAGS = -Wall -Wextra -Werror
RM = /bin/rm -f

all: $(NAME)

$(NAME) : $(OBJ) $(INCLUDES)
	$(AR) $(NAME) $(OBJ) $(OBJ_BONUS)
	@echo "$(CYAN)Succesfully creating library of libft.a$(RESET)"

%.o : %.c
	$(CC) $(CFLAGS) -c $(SRC) $(SRC_BONUS)
	@echo "$(MAGENTA)Compilation libf.a finished$(RESET)"

bonus: $(OBJ) $(OBJ_BONUS) $(INCLUDES)
	$(AR) $(NAME) $(OBJ) $(OBJ_BONUS)

clean:
	@$(RM) $(OBJ) $(OBJ_BONUS)
	@echo "$(GREEN)cleaning libft.a finished$(RESET)"

fclean: clean
	@$(RM) $(NAME)
	@echo "$(GREEN)forced cleaning libft.a finished$(RESET)"

re: fclean all

.PHONY: all clean fclean re bonus
