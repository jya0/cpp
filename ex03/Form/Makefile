# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jyao <jyao@student.42abudhabi.ae>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/12 15:15:54 by jyao              #+#    #+#              #
#    Updated: 2023/10/14 14:14:28 by jyao             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#-*- Makefile CPP05 Form Classes -*-

NAME		:=	libform.a

CC			:=	c++

CFLAGS		:=	-Wall -Wextra -Werror -std=c++98

HEADERS		:=	AForm.hpp	GradeTooHighException.hpp	GradeTooLowException.hpp	UnsignedFormException.hpp\
				ShruberryCreationForm.hpp				RobotomyRequestForm.hpp		PresidentialPardonForm.hpp

DIR_BUREAUCRAT	:= ../Bureaucrat/

DIR_FORM		:=	.

INCLUDES	:=	-I$(DIR_BUREAUCRAT)	-I$(DIR_FORM)

FILENAMES	:=	AForm	GradeTooHighException	GradeTooLowException	UnsignedFormException\
				ShrubberyCreationForm			RobotomyRequestForm		\
				PresidentialPardonForm

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