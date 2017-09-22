NAME = ft_cat
SRCS = ft_cat.c

all : $(NAME)

$(NAME) : $(SRCS)
	gcc -c $(SRCS)
	gcc -o $(NAME) ft_cat.o

clean :
	/bin/rm -f ft_cat.o

fclean : clean
	/bin/rm -f $(NAME)

re : fclean all
