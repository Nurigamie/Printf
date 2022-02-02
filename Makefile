SRCS =	ft_ptinf.c/
		ft_putchar/
		ft_putnbr.c/
		ft_putpointer.c/
		ft_putstr/
		ft_putunsigned/
		ft_strlen/

SRCSB = 


NAME	= ft_printf.h
CC                = gcc
RM                = rm -f
CFLAGS            = -Wall -Wextra -Werror
OBJS_DIR = obj/
OBJS = $(SRCS:.c=.o)
OBJECTS_PREFIXED = $(addprefix $(OBJSDIR), $(OBJS))
OBJSB  = $(SRCSB:.c=.o)
OBJECTS_BONUS_PREFIXED = $(addprefix $(OBJS_DIR), $(OBJSB))

all:	$(NAME)

clean:
	$(RM) $(OBJS) 

fclean: clean
	$(RM) $(NAME)

re:	fclean all

bonus: $(OBJECTS_BONUS_PREFIXED)
	@ar r $(NAME) $(OBJECTS_BONUS_PREFIXED)