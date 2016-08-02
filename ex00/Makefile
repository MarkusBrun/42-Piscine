# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mabrun <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/31 21:50:01 by mabrun            #+#    #+#              #
#    Updated: 2016/07/31 21:50:02 by mabrun           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = rush-2

SRCS = main.c help.c rush00.c rush01.c rush02.c rush03.c rush04.c comp.c list_helpers.c 

INCLUDES = -Irush.h -Irushstruct.h -Ilist.h

CFLAGS = -Wall -Werror -Wextra -o

all: $(NAME)

$(NAME):
	gcc $(INCLUDES) $(CFLAGS) $(NAME) $(SRCS)

clean:
	/bin/rm -f 

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
	
