NAME = do-op
HEADERS = $(wildcard *.h)
SRCS = $(wildcard *.c)

all : $(NAME)

$(NAME) : $(SRCS) $(HEADERS)
	gcc -o $(NAME) $(SRCS)

clean :
	/bin/rm -f $(NAME)
