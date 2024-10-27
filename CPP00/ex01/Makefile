NAME = PhoneBook

SRCS = main.cpp PhoneBook.cpp Contacts.cpp 
OBJS = $(SRCS:.cpp=.o)

C = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
	$(C) $(CFLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp
	$(C) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re