CC = clang++
FLAGS = -Wall -Wextra -Werror -MMD -std=c++98 # -fsanitize=address
SRCS = $(shell find . -type f -name "*.cpp")

OBJ = $(SRCS:.cpp=.o)
DEPENDS = ${SRCS:.cpp=.d}
NAME = a.out

.PHONY: all clean fclean re run

all: $(SRCS) $(NAME) run

run:
	./$(NAME) "DEBUG"

$(NAME): $(OBJ)
		$(CC) $(FLAGS) $(OBJ) -o $(NAME)

.cpp.o: $(SRCS)
		$(CC) $(FLAGS) -c $<

clean:
		@rm -rf $(OBJ) $(DEPENDS)

fclean: clean
		@rm -rf $(NAME) $(LFT)

re: fclean all

gitadd: $(SRCS) $(INC)
	git add $^
	git add Makefile

norm: $(SRCS) $(INC)
	norminette $^

-include ${DEPENDS}
