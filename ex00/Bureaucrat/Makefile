# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jyao <jyao@student.42abudhabi.ae>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/12 15:15:54 by jyao              #+#    #+#              #
#    Updated: 2023/10/13 14:29:43 by jyao             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#-*- Makefile CPP05 Bureaucrat Classes -*-

NAME		:=	libbureaucrat.a

CC			:=	c++

CFLAGS		:=	-Wall -Wextra -Werror -std=c++98

HEADERS		:=	Bureaucrat.hpp	GradeTooHighException.hpp	GradeTooLowException.hpp

FILENAMES	:=	Bureaucrat	GradeTooHighException	GradeTooLowException

SRCS		=	$(addsuffix .cpp, $(FILENAMES))

OBJSFOLDER	:=	objs/

OBJS		=	$(addprefix $(OBJSFOLDER), $(addsuffix .o, $(FILENAMES)))

$(OBJSFOLDER)%.o: %.cpp
	$(CC) $(CFLAGS) $< -c -o $@

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