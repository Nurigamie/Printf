# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbuchet <mbuchet@student.s19.be>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/04 15:28:54 by mbuchet           #+#    #+#              #
#    Updated: 2022/02/04 15:28:54 by mbuchet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	ft_printf.c/
		ft_putchar.c/
		ft_putnbr.c/
		ft_putpointer.c/
		ft_putstr.c/
		ft_putunsigned.c/
		ft_strlen.c/

SRCSB = ft_lenint.c/
		ft_flagsBonus.c


NAME	= ft_printf.h
CC                = gcc
RM                = rm -f
CFLAGS            = -Wall -Wextra -Werror
OBJS_DIR = obj/
OBJS = $(SRCS:.c=.o)
OBJECTS_PREFIXED = $(addprefix $(OBJSDIR), $(OBJS))
OBJSB  = $(SRCSB:.c=.o)
OBJECTS_BONUS_PREFIXED = $(addprefix $(OBJS_DIR), $(OBJSB))

$(NAME): $(OBJS)
	@ar r $(NAME) $(OBJS)


all:	$(NAME)

clean:
	$(RM) $(OBJS) 

fclean: clean
	$(RM) $(NAME)

re:	fclean all

bonus: $(OBJECTS_BONUS_PREFIXED)
	@ar r $(NAME) $(OBJECTS_BONUS_PREFIXED)