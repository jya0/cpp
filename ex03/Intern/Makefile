# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jyao <jyao@student.42abudhabi.ae>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/14 16:06:29 by jyao              #+#    #+#              #
#    Updated: 2023/10/14 16:51:25 by jyao             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#-*- Makefile CPP05 Intern Classes -*-

NAME		:=	libintern.a

CC			:=	c++

CFLAGS		:=	-Wall -Wextra -Werror -std=c++98

HEADERS		:=	Intern.hpp	InvalidFormTypeException.hpp

DIR_FORM		:=	../Form/

DIR_BUREAUCRAT	:= ../Bureaucrat/

INCLUDES	:=	-I$(DIR_BUREAUCRAT) -I$(DIR_FORM)


FILENAMES	:=	Intern	InvalidFormTypeException

SRCS		=	$(addsuffix .cpp, $(FILENAMES))

OBJSFOLDER	:=	objs/

OBJS		=	$(addprefix $(OBJSFOLDER), $(addsuffix .o, $(FILENAMES)))

$(OBJSFOLDER)%.o: %.cpp
	$(CC) $(CFLAGS) $(INCLUDES) $< -c -o $@

all: $(NAME)

$(NAME): $(HEADRES) $(OBJSFOLDER) $(OBJS)
	ar -rcs $@ $(OBJS)

$(OBJSFOLDER):
	mkdir -p $@

clean:
	rm -rf $(OBJSFOLDER)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re