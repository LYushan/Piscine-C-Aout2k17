# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: julin <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/20 09:11:13 by julin             #+#    #+#              #
#    Updated: 2017/08/20 16:45:49 by julin            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = eval_expr
FLAGS = -Wall -Wextra -Werror
SRC = main.c outils.c eval_expr.c
OBJ = main.o outils.o eval_expr.o

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -c $(SRC)
	gcc $(FLAGS) $(OBJ) -o $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean:
	/bin/rm -f $(NAME)

re: fclean all
