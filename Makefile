# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/17 11:24:40 by cterblan          #+#    #+#              #
#    Updated: 2018/07/20 13:13:50 by cterblan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

################################################################################
#								FILE NAME
################################################################################
NAME := libft.a
#OUTPUT FILE NAME ^^^
################################################################################
#								DIRECTORIES
################################################################################
INC_DIR := inc
#INCLUDES DIRECTORY ^^^
SRC_DIR := src
#SOURCES DIRECTORY ^^^
OBJ_DIR := obj
#OBJECTS DIRECTORY ^^^
################################################################################
#								FILES
################################################################################
#SRC:= ft_function.c
SRC := ft_isascii.c\
		ft_memalloc.c\
		ft_memmove.c\
		ft_putnbr.c\
		ft_strcpy.c\
		ft_strlen.c\
		ft_toupper.c\
		ft_isdigit.c\
		ft_memccpy.c\
		ft_memset.c\
		ft_putnbr_fd.c\
		ft_strdel.c\
	  	ft_strncmp.c\
		ft_atoi.c\
		ft_islower.c\
		ft_memchr.c\
		ft_putchar.c\
		ft_putstr.c\
	  	ft_strdup.c\
		ft_strncpy.c\
		ft_bzero.c\
		ft_isprint.c\
		ft_memcmp.c\
		ft_putchar_fd.c\
	  	ft_putstr_fd.c\
		ft_strequ.c\
		ft_strnequ.c\
		ft_isalnum.c\
		ft_isspace.c\
		ft_memcpy.c\
	 	ft_putendl.c\
		ft_strclr.c\
		ft_striter.c\
		ft_strnew.c\
		ft_isalpha.c\
		ft_isupper.c\
	 	ft_memdel.c\
		ft_putendl_fd.c\
		ft_strcmp.c\
		ft_striteri.c\
		ft_tolower.c\
		ft_strcat.c\
	 	ft_strncat.c\
		ft_strlcat.c\
		ft_strchr.c\
		ft_strrchr.c\
		ft_strstr.c\
		ft_strmap.c\
	 	ft_strmapi.c\
		ft_strnstr.c\
		ft_strsub.c\
		ft_strjoin.c\
		ft_strtrim.c\
	 	ft_itoa.c\
		ft_wordcount.c\
		ft_strsplit.c\
		ft_lstnew.c\
		ft_lstdelone.c\
		ft_lstdel.c\
	 	ft_lstadd.c\
		ft_lstiter.c\
		ft_lstmap.c\
		ft_strclen.c\
		ft_iscfound.c
#ADD SOURCE FILES HERE ^^^
OBJ := $(addprefix $(OBJ_DIR)/, $(SRC:%.c=%.o))
################################################################################
#								COMPILER
################################################################################
CFLAGS := -Wall -Werror -Wextra
#ADD ADDITIONAL FLAGS HERE ^^^
CC := gcc $(CFLAGS)
################################################################################
#								RULES
################################################################################

all: $(NAME)

$(NAME): $(OBJ)
	@echo "\033[35m\t\t[COMPILING] $@\033[0m"
	ar rcs $(NAME) $(OBJ)
	@echo "\033[32m\t\t[COMPILED SUCCESSFULLY]\033[0m"
	#DON'T TOUCH ^^^

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@echo "\033[36m\t\t[Building]\033[0m $@"
	@mkdir -p $(OBJ_DIR)
	@$(CC) -I $(INC_DIR) -o $@ -c $<
	@echo "\033[33m\t\t[SUCCESS]\033[0m"
	#DON'T TOUCH ^^^

clean:
	@echo "\033[31m\t\t[CLEANING]\t$(OBJ_DIR)\033[0m"
	@rm -rf $(OBJ_DIR)
	#DON'T TOUCH ^^^

fclean: clean
	@echo "\033[31m\t\t[FCLEAN]\t$(NAME)\033[0m"
	@rm -f $(NAME)
	#ADD ADDITIONAL NAME FILES HERE ^^^

re: fclean all
################################################################################
#								SPECIAL
################################################################################

.PHONEY := all clean fclean re
#ADD PHONEY HERE ^^^

.SILENT:
#DON'T TOUCH ^^^

.PRECIOUS := author
#ADD PRECIOUS HERE ^^^
