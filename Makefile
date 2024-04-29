

NAME     := spellchecker

SRCS     := main.cpp src/distance.cpp src/parse.cpp src/print_suggestions.cpp
OBJS     := $(SRCS:.cpp=.o)
INCLUDES := includes

CPP      := g++
CPPFLAGS := -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJS)
	@$(CPP) $(OBJS) -o $@ 

%.o: %.cpp
	$(CPP) $(CPPFLAGS) -o $@ -c $< -I $(INCLUDES)

clean:
	@rm -f $(OBJS)
	@echo "[INFO] Objects removed!"

fclean: clean
	@rm -f $(NAME)
	@rm -f $(NAME).exe
	@echo "[INFO] $(NAME) removed!"

re:     fclean all

.PHONY: all clean fclean format re