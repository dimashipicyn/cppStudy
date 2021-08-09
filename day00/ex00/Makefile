CC = clang++
FLAGS = -Wall -Wextra -MMD # -fsanitize=address
SRCS = megaphone.cpp

OBJ = $(SRCS:.cpp=.o)
DEPENDS = ${SRCS:.cpp=.d}
NAME = megaphone

.PHONY: all clean fclean re

all: $(SRCS) $(NAME)

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
