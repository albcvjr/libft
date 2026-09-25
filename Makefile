NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_strlen.c ft_isalpha.c ft_isdigit.c ft_isalnum.c /
	ft_isascii.c ft_isprint.c void	ft_memset.c 

OBJS = $(SRCS:.c=.o)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS) 

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
