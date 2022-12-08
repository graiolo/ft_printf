# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: graiolo <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/21 16:38:22 by graiolo           #+#    #+#              #
#    Updated: 2022/11/04 15:32:25 by graiolo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a
CC			= gcc $(CFLAGS)
CFLAGS		= -Wall -Werror -Wextra -c
RM			= rm -f
LIB			= ar rcs $(NAME)

SRC_FILES	=	ft_printf.c ft_printf_utils.c ft_print_ptr.c ft_print_unsigned.c ft_print_hex.c\
				ft_printf_flags.c ft_printf_char.c ft_printf_length_flag.c ft_printf_print_num.c\
				ft_hex_unsigned_support.c ft_num_support.c

OBJ 		= 	$(SRC_FILES:.c=.o)



DEF_COLOR = \033[0;39m
GREEN = \033[0;92m
RED = \033[0;91m
CIANO = \033[0;96m

$(NAME):	$(OBJ) 
			@cd libft/ && $(MAKE) && mv libft.a ../$(NAME)
			@$(CC) $(SRC_FILES)
			@$(LIB) $(OBJ)
			@echo "$(GREEN)$(NAME) compilata con successo!$(DEF_COLOR)"

all:		$(NAME)

clean:
			@$(RM) $(OBJ)
			@cd libft/ && $(MAKE) clean
			@echo "$(CIANO)file .obj di $(NAME) eliminati con successo!$(DEF_COLOR)"

fclean:		clean
			@$(RM) $(NAME)
#			@cd libft/ && $(MAKE) fclean
			@echo "$(RED)libft.a rimossa con successo!$(DEF_COLOR)"
			@echo "$(RED)$(NAME) rimossa con successo!$(DEF_COLOR)"			

re:			fclean all

bonus:		all

.PHONY:		all clean fclean re
.SILENT:	
