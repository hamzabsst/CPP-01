NAME	= unnecessary_violence
CC		= c++
CFLAGS	= -Wall -Werror -Wextra -std=c++98

SRCS 	= src/main.cpp src/Weapon.cpp src/HumanA.cpp src/HumanB.cpp

OBJS	= $(SRCS:.cpp=.o)

INC_DIR			= inc
HEADER			= $(INC_DIR)/HumanA.hpp $(INC_DIR)/HumanB.hpp $(INC_DIR)/Weapon.hpp

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)


%.o: %.cpp $(HEADER)
	@$(CC) $(CFLAGS) -I $(INC_DIR) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
