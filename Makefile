SRCS	=	ft_atoi.c		ft_bzero.c		ft_calloc.c		\
			ft_isalnum.c	ft_isalpha.c	ft_isascii.c	\
			ft_isdigit.c	ft_isprint.c	ft_memchr.c		\
			ft_memcmp.c		ft_memcpy.c		ft_memmove.c	\
			ft_memset.c		ft_strchr.c		ft_split.c		\
			ft_strdup.c		ft_strlcat.c	ft_strlcpy.c	\
			ft_strlen.c		ft_strncmp.c	ft_strnstr.c	\
			ft_strrchr.c	ft_tolower.c	ft_toupper.c	\
			ft_putchar_fd.c	ft_putendl_fd.c	ft_putnbr_fd.c	\
			ft_putstr_fd.c	ft_substr.c	ft_strjoin.c		\
			ft_strtrim.c	ft_itoa.c	ft_strmapi.c		\
			ft_striteri.c

OBJS	=	$(SRCS:%.c=%.o)

NAME	=	libft.a

HEADER	=	libft.h

CC		=	cc

FLAGS	=	-Wall -Werror -Wextra

RM		=	rm -f

.c.o:
	@$(CC) $(FLAGS) -c $< -o $@

$(NAME):	$(OBJS) $(HEADER)
	@ar rc $(NAME) $(OBJS)
	@echo "\033[1;92mLib		successfully created\033[0m"

all:	$(NAME)

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)
	@echo "\33[1;93mlibft  successfully removed\33[0m"

re:	fclean all

.PHONY: all clean fclean re
