# ---------------------------------------------------------------------------- #
#                                   MAKEFILE                                   #
# ---------------------------------------------------------------------------- #

SRC_DIRS := $(wildcard srcs/*)

SRC_FILES := $(foreach dir, $(SRC_DIRS), $(wildcard $(dir)/ex.cpp))

TARGETS := $(SRC_FILES:srcs/%/ex.cpp=srcs/%/ex)

CC = g++ -g
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f

all: $(TARGETS)

srcs/%/ex: srcs/%/ex.cpp
	$(CC) $(CFLAGS) $< -o $@

clean:
	$(RM) $(TARGETS)  # Remove apenas os executáveis, não as pastas

fclean: clean

re: fclean all

.PHONY: all clean fclean re
