CPP = c++ -Wall -Wextra -Werror -std=c++98
RM=rm -rf
SOURCES = Fixed.cpp main.cpp Point.cpp
OBJECTS = $(SOURCES:.cpp=.o)
NAME = Fixed
all: $(NAME)

$(NAME): $(OBJECTS)
	$(CPP) $(OBJECTS) -o $(NAME)

%.o: %.cpp Fixed.hpp Point.hpp
	$(CPP) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

re : fclean all

.PHONY : clean