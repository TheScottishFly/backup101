NAME = ft_display_file
SRCS = ft_display_file.c

all : $(NAME)

$(NAME) : $(SRCS)
	gcc -c -Wall -Wextra -Werror $(SRCS)
	gcc -o $(NAME) ft_display_file.o

clean :
	/bin/rm -f ft_display_file.o

flcean : clean
	/bin/rm -f $(NAME)

re : fclean all
