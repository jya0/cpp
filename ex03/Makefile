# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jyao <jyao@student.42abudhabi.ae>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/13 14:29:28 by jyao              #+#    #+#              #
#    Updated: 2023/10/14 16:50:29 by jyao             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#-*- Makefile ex03 -*-

NAME			:=	intern.exe

DIR_BUREAUCRAT	:=	./Bureaucrat/

LIB_BUREACRAT	=	$(DIR_BUREAUCRAT)libbureaucrat.a

DIR_FORM		:=	./Form/

LIB_FORM		=	$(DIR_FORM)libform.a

DIR_INTERN		:=	./Intern/

LIB_INTERN		=	$(DIR_INTERN)libintern.a

INCLUDES		=	-I$(DIR_BUREAUCRAT)	-I$(DIR_FORM)	-I$(DIR_INTERN)

LIBRARIES		=	$(LIB_BUREACRAT)	$(LIB_FORM)	$(LIB_INTERN)

CC				:=	c++

CFLAGS			:=	-Wall -Wextra -Werror -std=c++98

FILENAMES 		:=	main

SRCS			=	$(addsuffix .cpp, $(FILENAMES))

OBJSFOLDER		=	objs/

OBJS			=	$(addprefix $(OBJSFOLDER), $(addsuffix .o, $(FILENAMES)))

$(OBJSFOLDER)%.o: %.cpp
	$(CC) $(CFLAGS) $(INCLUDES) $< -c -o $@

all: dependency $(NAME)

dependency:
	make -C $(DIR_BUREAUCRAT)
	make -C $(DIR_FORM)
	make -C $(DIR_INTERN)

$(NAME): $(LIBRARIES) $(OBJSFOLDER) $(OBJS)
	$(CC) $(LIBRARIES) $(OBJS) -o $@

$(OBJSFOLDER):
	mkdir -p $@

clean:
	rm -rf $(OBJSFOLDER)
	make clean -C $(DIR_BUREAUCRAT)
	make clean -C $(DIR_FORM)
	make clean -C $(DIR_INTERN)

fclean: clean
	rm -rf $(NAME)
	make fclean -C $(DIR_BUREAUCRAT)
	make fclean -C $(DIR_FORM)
	make fclean -C $(DIR_INTERN)

re: fclean all

.PHONY: all clean fclean re dependency