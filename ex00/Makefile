# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jyao <jyao@student.42abudhabi.ae>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/13 14:29:28 by jyao              #+#    #+#              #
#    Updated: 2023/10/13 15:13:10 by jyao             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#-*- Makefile ex00 -*-

NAME			:=	bureaucrat.exe

DIR_BUREAUCRAT	:=	./Bureaucrat/

LIB_BUREACRAT	=	$(DIR_BUREAUCRAT)libbureaucrat.a

INCLUDES		=	-I$(DIR_BUREAUCRAT)

LIBRARIES		=	$(LIB_BUREACRAT)

CC				:=	c++

CFLAGS			:=	-Wall -Wextra -Werror -std=c++98

FILENAMES 		:=	main

SRCS			=	$(addsuffix .cpp, $(FILENAMES))

OBJSFOLDER		=	objs/

OBJS			=	$(addprefix $(OBJSFOLDER), $(addsuffix .o, $(FILENAMES)))


$(OBJSFOLDER)%.o: %.cpp
	$(CC) $(CFLAGS) $(INCLUDES) $< -c -o $@

all: $(NAME)

$(NAME): $(LIBRARIES) $(OBJSFOLDER) $(OBJS)
	$(CC) $(LIBRARIES) $(OBJS) -o $@

$(OBJSFOLDER):
	mkdir -p $@

$(LIB_BUREACRAT):
	make -C $(DIR_BUREAUCRAT)

clean:
	rm -rf $(OBJSFOLDER)
	make clean -C $(DIR_BUREAUCRAT)

fclean: clean
	rm -rf $(NAME)
	make fclean -C $(DIR_BUREAUCRAT)

re: fclean all

.PHONY: all clean fclean re