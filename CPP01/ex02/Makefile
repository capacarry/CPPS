
CC := c++

CFLAGS := -Wall -Wextra -Werror -std=c++98

SRCS := main.cpp

OBJS := $(SRCS:.cpp=.o)

NAME := pointers

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(NAME)

fclean: clean