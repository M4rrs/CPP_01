NAME = Zombie
CC = c++
FLAGS = -Wall -Werror -Wextra -I -std=c++98 -fsanitize=address

RM = rm -rf

SRCS = main.cpp zombie.cpp newZombie.cpp randomChump.cpp
INC = Zombie.hpp

OBJS = ${SRCS:%.cpp=%.o}

%.o: %.cpp ${INC}
	@printf "\033[38;5;121mCompiling $<...\033[0m\r"
	@${CC} ${FLAGS} -c $< -o $@

all: ${NAME}

${NAME}: ${OBJS}
	@echo "\n\033[38;5;204mThe Zombies are here\033[0m"
	@${CC} ${FLAGS} ${OBJS} -o $@

clean:
	@echo "\033[38;5;227mClearing up the remains\033[0m"
	@${RM} ${OBJS}

fclean:	clean
	@echo "\033[38;5;81mBurying the zombies\033[0m"
	@${RM} ${NAME}

re: fclean all