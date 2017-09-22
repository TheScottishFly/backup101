NAME = ft_tail
SRCS = ft_tail.c

all : $(NAME)

$(NAME) : $(SRCS)
	gcc -c $(SRCS)
	gcc -o $(NAME) ft_tail.o

clean :
	/bin/rm -f ft_tail.o

fclean : clean
	/bin/rm -f $(NAME)

re : fclean all
