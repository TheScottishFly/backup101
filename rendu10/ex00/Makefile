NAME = libft.a
HEADERS = $(wildcard includes/*.h)
SRCS = $(wildcard srcs/*.c)

all : $(NAME)

$(NAME) : $(SRCS) $(HEADERS)
	gcc -c $(SRCS) $(HEADERS)
	ar rc $(NAME) *.o
	ranlib $(NAME)
clean :
	/bin/rm -f *.o

fclean : clean
	/bin/rm -f $(NAME)

re : fclean all
