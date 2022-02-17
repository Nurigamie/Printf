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

SRCS =	ft_printf.c \
		ft_putchar.c \
		ft_putnbr.c \
		ft_putpointer.c\
		ft_putstr.c \
		ft_putunsigned.c\
		ft_strlen.c\

# **************************************************************************** #

NAME	= ft_printf.h
OBJS = $(SRCS:.c=.o)
CC                = gcc
RM                = rm -f
CFLAGS            = -Wall -Wextra -Werror
OBJSB  = $(SRCSB:.c=.o)

# **************************************************************************** #

%.o: %.c
	gcc $(FLAGS) -I $(INCLUDES) -c $< -o $@

$(NAME): $(OBJS)
	@ar r $(NAME) $(OBJS)

# **************************************************************************** #
all:	$(NAME)

clean:
	$(RM) $(OBJS) 

fclean: clean
	$(RM) $(NAME) $(OBJSB)

re:	fclean all

bonus: $(OBJSB)
	@ar r $(NAME) $(OBJSB)
