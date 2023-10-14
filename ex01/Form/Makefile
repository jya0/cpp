# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jyao <jyao@student.42abudhabi.ae>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/12 15:15:54 by jyao              #+#    #+#              #
#    Updated: 2023/10/13 16:23:33 by jyao             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#-*- Makefile CPP05 Form Classes -*-

NAME		:=	libform.a

CC			:=	c++

CFLAGS		:=	-Wall -Wextra -Werror -std=c++98

HEADERS		:=	Form.hpp	GradeTooHighException.hpp	GradeTooLowException.hpp

DIR_BUREAUCRAT	:= ../Bureaucrat/

DIR_FORM		:=	.

INCLUDES	:=	-I$(DIR_BUREAUCRAT)	-I$(DIR_FORM)

FILENAMES	:=	Form	GradeTooHighException	GradeTooLowException

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