SRCS			=	./main.cpp \

OBJS			= 	$(SRCS:.cpp=.o)

CC				= 	c++
RM				= 	rm -f
CFLAGS			= 	-Wall -Wextra -Werror -std=c++98

NAME			=  itsbrainz

all:			$(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
				$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME) $(OBJS)

re:				fclean $(NAME)

.PHONY:			all clean fclean re bonus