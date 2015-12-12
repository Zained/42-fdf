#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mdriay <mdriay@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/12/17 15:48:58 by mdriay            #+#    #+#              #
#    Updated: 2014/12/17 16:57:25 by mdriay           ###   ########.fr        #
#                                                                              #
#******************************************************************************#

MKEX = gcc -o
SRC =	get_coord.c			\
		ft_draw.c			\
		main.c				\
		get_next_line.c

FLAGS = -Wall -Wextra -Werror
OBJECT = $(SRC:.c=.o)
COMP = gcc -c
NAME = fdf

all : $(NAME)

$(NAME) : $(OBJECT)
	@$(MKEX) $(NAME) $(OBJECT) -L /usr/X11/lib -lmlx -lXext -lX11 -L libft/ -lft
	@echo "FDF : vous pouvez utliser les fleches, page_up/page_down, et echap"

$(OBJECT) :
	@make -C libft/
	@$(COMP) $(SRC) $(FLAGS) -I./ -I /usr/X11/include/ -I libft/
	@echo "Compilation of C files succesful"

clean :
	@/bin/rm -f $(OBJECT)
	@echo "Object deleted"


fclean : clean
	@/bin/rm -f $(NAME)
	@echo "Folder cleanup successful"

re : fclean all