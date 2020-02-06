# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebresser <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/04 12:56:04 by ebresser          #+#    #+#              #
#    Updated: 2020/02/06 08:58:49 by ebresser         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = *.c
OBJ = *.o 
all : $(NAME)
$(NAME):
	@gcc -Wall -Wextra -Werror -c $(SRC) -I $(HEAD) && ar rc $(NAME) $(OBJ)
	@echo "Finalizado libft.a"
clean:
	@/bin/rm -f $(OBJ)
	@echo "Finalizado rm -f *.o"
fclean: clean
	@/bin/rm -f $(NAME)
	@echo "Finalizado rm -f *.o libft.a" 
re: fclean all

norm:
	@norminette -R CheckForbiddenSourceHeader $(SRC)
