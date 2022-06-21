SRCS		=	ft_printf.c				src/ft_printf_utils.c	\
				src/ft_print_char.c		src/ft_print_hex.c		\
				src/ft_print_int.c		src/ft_print_str.c		\
				src/ft_print_unint.c	src/ft_print_ptr.c

OBJS		=	$(SRCS:%.c=%.o)

NAME		=	libftprintf.a

COMPILE		=	cc

FLAGS		=	-Wall -Wextra -Werror

RM			=	rm -f

%.o:	%.c
	@$(COMPILE) $(FLAGS) -c $< -o $(<:%.c=%.o)

all:	$(NAME)

$(NAME): $(OBJS)
	@ar -rc $(NAME) $(OBJS)
	@echo "\033[1;92mLibftPrintf		successfully created\033[0m"

clean:
	@$(RM) $(OBJS)

fclean:	clean
	@$(RM) $(NAME)
	@echo "\33[1;93mLibftPrintf	successfully removed\33[0m"

re:	fclean	all

.PHONY:	all	clean	fclean	re
