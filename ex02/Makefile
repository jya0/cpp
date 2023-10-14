# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jyao <jyao@student.42abudhabi.ae>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/13 14:29:28 by jyao              #+#    #+#              #
#    Updated: 2023/10/14 19:45:47 by jyao             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#-*- Makefile ex02 -*-

NAME			:=	form.exe

DIR_BUREAUCRAT	:=	./Bureaucrat/

LIB_BUREACRAT	=	$(DIR_BUREAUCRAT)libbureaucrat.a

DIR_FORM		:=	./Form/

LIB_FORM		=	$(DIR_FORM)libform.a

INCLUDES		=	-I$(DIR_BUREAUCRAT)	-I$(DIR_FORM)

LIBRARIES		=	$(LIB_BUREACRAT)	$(LIB_FORM)

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

$(NAME): $(LIBRARIES) $(OBJSFOLDER) $(OBJS)
	$(CC) $(OBJS) $(LIBRARIES) -o $@

$(OBJSFOLDER):
	mkdir -p $@

clean:
	rm -rf $(OBJSFOLDER)
	make clean -C $(DIR_BUREAUCRAT)
	make clean -C $(DIR_FORM)

fclean: clean
	rm -rf $(NAME)
	make fclean -C $(DIR_BUREAUCRAT)
	make fclean -C $(DIR_FORM)

re: fclean all

.PHONY: all clean fclean re dependency