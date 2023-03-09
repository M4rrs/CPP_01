NAME = string
CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98

RM = rm -rf
SRC = main.cpp
OBJ = $(SRC:.cpp=.o)

%.o: %.cpp
	@echo "\033[38;5;121mCompiling $<...\033[0m"
	@$(CC) $(FLAGS) -c $< -o $@

${NAME}: ${OBJ}
	@echo "\033[38;5;204mHi this is brain.\033[0m"
	@${CC} ${FLAGS} ${OBJ} -o ${NAME}

all: ${NAME}

clean:
	@echo "\033[38;5;227mRemoving objects..\033[0m"
	@${RM} ${OBJ}

fclean: clean
	@echo "\033[38;5;81mRemoving executable..\033[0m"
	@${RM} ${NAME}

re: fclean all