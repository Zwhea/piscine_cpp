# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/20 14:09:46 by twang             #+#    #+#              #
#    Updated: 2023/11/07 17:26:57 by wangthea         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

include ../config/print.mk

.SILENT:

#--variables-------------------------------------------------------------------#

NAME		=	Classe_abstraite
DEBUG		=	no
VALGRIND	=	no
OS			=	$(shell uname)
TWANG		=	\e]8;;https://profile.intra.42.fr/users/twang\a\e[34mtwang\e[34m\e]8;;\a
CC			=	c++

#--headers, sources & objects--------------------------------------------------#

HDR_DIR		=	includes
SRC_DIR		=	sources
HEADERS		=	$(HDR_DIR)/Animal.hpp										\
				$(HDR_DIR)/Brain.hpp										\
				$(HDR_DIR)/Cat.hpp											\
				$(HDR_DIR)/Dog.hpp											\
				$(HDR_DIR)/main.h											\
				$(HDR_DIR)/WrongAnimal.hpp									\
				$(HDR_DIR)/WrongCat.hpp
SOURCES		=	$(SRC_DIR)/Animal.cpp										\
				$(SRC_DIR)/Cat.cpp											\
				$(SRC_DIR)/Brain.cpp										\
				$(SRC_DIR)/Dog.cpp											\
				$(SRC_DIR)/main.cpp											\
				$(SRC_DIR)/WrongAnimal.cpp									\
				$(SRC_DIR)/WrongCat.cpp
OBJ_DIR		=	.objs

#--flags mandatory & bonus ----------------------------------------------------#

CPPFLAGS		=	-Wall -Wextra -Werror -Wno-shadow -std=c++98 -I $(HDR_DIR)

#--debug flags-----------------------------------------------------------------#

DFLAGS		=	-g3 -fsanitize=address

ifeq ($(DEBUG), yes)
CPPFLAGS		+=	$(DFLAGS)
endif

#--leaks flags-----------------------------------------------------------------#

LEAKS	=	valgrind --leak-check=full --show-leak-kinds=all --quiet

#--define flags----------------------------------------------------------------#

ifeq ($(OS), Darwin)
CPPFLAGS	+=	-DMACOS
endif

ifeq ($(WHO), twang)
WHO		=	Théa 🐼
else
WHO		=	!
endif

#--objects mandatory & bonus --------------------------------------------------#

OBJECTS	=	$(addprefix $(OBJ_DIR)/, $(SOURCES:.cpp=.o))

#--global rules----------------------------------------------------------------#

.DEFAULT_GOAL = all

#--compilation rules-----------------------------------------------------------#

all:
	$(MAKE) header
	$(MAKE) $(NAME) -j
	$(MAKE) welcome

$(NAME): $(OBJECTS)
	$(CC) $(CPPFLAGS) $^ -o $@
	$(PRINT_CREATING)

$(OBJ_DIR)/%.o: %.cpp $(HEADERS)
	mkdir -p $(dir $@)
	$(CC) $(CPPFLAGS) -c $< -o $@
	$(PRINT_COMPILING)

#--debugs----------------------------------------------------------------------#

debug:
	$(MAKE) re -j DEBUG=yes

leaks:
	clear
	$(MAKE) -j VALGRIND=yes
	$(LEAKS) ./Classe_abstraite

#--print header----------------------------------------------------------------#

header:
	printf "\n${PURPLE}project:\t${END}${BLUE}cpp_04 : ex02 : Classe abstraite${END}\n"
	printf "${PURPLE}author:\t\t${END}${BLUE}${TWANG}${END}\n"
	printf "${PURPLE}leaks mode:\t${END}${BLUE}${VALGRIND}${END}\n"
	printf "${PURPLE}debug mode:\t${END}${BLUE}${DEBUG}${END}\n"
	printf "${PURPLE}compiler:\t${END}${BLUE}${CC}${END}\n"
	printf "${PURPLE}flags:\t\t${END}${BLUE}${CPPFLAGS}${END}\n"
	printf "${PURPLE}date:\t\t${END}${BLUE}2023/11${END}\n"
	printf "              ____________________________\n\n"

welcome:
	printf "\n${GREEN}Welcome ${WHO}${END}\n\n"

#--re, clean, fclean & norminette----------------------------------------------#

re:
	clear
	$(MAKE) fclean
	$(MAKE) -j all

clean:
	$(RM) -rf $(OBJECTS)
	$(RM) -rf $(OBJ_DIR)
	$(PRINT_CLEAN)

fclean:
	clear
	$(MAKE) clean
	$(RM) $(NAME)
	$(PRINT_FCLEAN)

#--PHONY-----------------------------------------------------------------------#

.PHONY: all debug leaks header welcome re clean fclean
