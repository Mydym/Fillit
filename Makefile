# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: udelorme <udelorme@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/05 12:11:55 by udelorme          #+#    #+#              #
#    Updated: 2015/12/17 17:50:41 by udelorme         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

LIB = -L. -lft

FLAGS = -Wall -Werror -Wextra

SRC = 	main.c				\
		check_input.c		\
		get_input.c			\
		tetripush.c			\
		tetrinew.c			\
		match_pattern_1.c	\
		match_pattern_2.c	\
		match_rot_t.c		\
		match_rot_o.c		\
		match_rot_i.c		\
		match_rot_j.c		\
		match_rot_l.c		\
		match_rot_s.c		\
		match_rot_z.c		\
		ft_filltab.c		\
		ft_printtab.c		\
		ft_place_1.c		\
		ft_place_2.c		\
		ft_rotate_t.c		\
		ft_rotate_i.c		\
		ft_rotate_j.c		\
		ft_rotate_l.c		\
		ft_rotate_s.c		\
		toolkit.c			\
		tetri_print.c

OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME) :
	gcc $(FLAGS) -c $(SRC) 
	gcc $(FLAGS) $(LIB) $(OBJ) -o $(NAME) 

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : clean fclean re all
