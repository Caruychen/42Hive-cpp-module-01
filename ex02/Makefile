NAME		:= brain

CC			:= clang++
CFLAGS		:= -std=c++98 -Wall -Wextra -Werror

SRC_DIR		:= ./src
OBJ_DIR		:= ./obj
SRCS		:= main.cpp
OBJS		:= $(SRCS:%.cpp=$(OBJ_DIR)/%.o)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJ_DIR)

fclean: clean
	@rm -f $(NAME)

re: fclean all
