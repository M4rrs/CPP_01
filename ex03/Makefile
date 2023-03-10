NAME = Humans
CC = c++
FLAGS = -Wall -Werror -Wextra -I -std=c++98 -fsanitize=address

RM = rm -rf

SRCS = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
INC = Weapon.hpp HumanA.hpp HumanB.hpp

OBJS = ${SRCS:%.cpp=%.o}

%.o: %.cpp ${INC}
	@printf "\033[38;5;121mCompiling $<...\033[0m\r"
	@${CC} ${FLAGS} -c $< -o $@

all: ${NAME}

${NAME}: ${OBJS}
	@echo "\n\033[38;5;204mTime for unnecessary violence\033[0m"
	@${CC} ${FLAGS} ${OBJS} -o $@

clean:
	@echo "\033[38;5;227mViolence is not the answer here\033[0m"
	@${RM} ${OBJS}

fclean:	clean
	@echo "\033[38;5;81mDiscarding the humans\033[0m"
	@${RM} ${NAME}

re: fclean all