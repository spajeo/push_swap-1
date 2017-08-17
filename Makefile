#                                                         :::      ::::::::    #
#    make                                               :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mvillemi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/01/21 04:14:19 by mvillemi          #+#    #+#              #
#*   Updated: 2017/04/18 17:58:25 by mvillemi         ###   ########.fr       *#
#                                                                              #
# **************************************************************************** #

NAME			:= push_swap_proj

all: $(NAME)

$(NAME) : 
	make -C libft
	make -C liblst
	make -C srcs/exec
	make -C srcs/checker 
	make -C srcs/push_swap

clean :
	make -C libft clean
	make -C liblst clean
	make -C srcs/exec clean
	make -C srcs/checker clean
	make -C srcs/push_swap clean

fclean : 
	make -C libft fclean
	make -C liblst fclean
	make -C srcs/exec fclean
	make -C srcs/checker fclean
	make -C srcs/push_swap fclean
	rm -rf checker.dSYM
	rm -rf push_swap.dSYM

ps :
	make -C srcs/exec
	make -C srcs/checker
	make -C srcs/push_swap

psfclean :
	make -C srcs/exec fclean
	make -C srcs/checker fclean
	make -C srcs/push_swap fclean

re : fclean all

.SILENT:
