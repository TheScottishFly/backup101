NAME = ft_display_file
SRCS = ft_display_file.c

all : $(NAME)

$(NAME) : $(SRCS)
	gcc -c $(SRCS)
	gcc -o $(NAME) ft_display_file.o

clean :
	/bin/rm -f ft_display_file.o

fclean : clean
	/bin/rm -f $(NAME)

re : fclean all
