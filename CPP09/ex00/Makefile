# Variables

NAME	=	btc
PROJECT =	Btc

CC		=	c++
FLAG	=	-Wall -Wextra -Werror -g -std=c++98


# Colors

DEF_COLOR	= \033[0;39m
GRAY 		= \033[0;90m
RED 		= \033[0;91m
GREEN 		= \033[0;92m
YELLOW 		= \033[0;93m
BLUE		= \033[0;94m
MAGENTA		= \033[0;95m
CYAN		= \033[0;96m
WHITE		= \033[0;97m

# Sources

FILES	=	main BitcoinExchange
SRCS	=	$(addsuffix .cpp, $(FILES))
OBJS	=	$(addsuffix .o, $(FILES))

DEP		=	BitcoinExchange
DEPS	=	$(addsuffix .hpp, $(DEP))
DEPEN	=	$(DEPS) Makefile

###

all		:	$(NAME)

$(NAME)	:	$(OBJS) $(DEPEN)
	@echo "$(YELLOW)COMPILING $(PROJECT)...$(DEF_COLOR)"
	$(CC) $(FLAG) $(OBJS) -o $(NAME)
	@echo "$(GREEN)$(PROJECT) compiled!$(DEF_COLOR)"

$(OBJ_DIR)%.o	:	$(SRC_DIR)%.cpp | $(OBJF)
	$(CC) $(FLAG) -c $< -o $@

clean	:
	@rm -f $(OBJS)
	@echo "$(MAGENTA)$(PROJECT) objects cleaned!$(DEF_COLOR)"

fclean	:	clean
	@rm -f $(NAME)
	@echo "$(YELLOW)$(PROJECT) executable cleaned!$(DEF_COLOR)"

re		:	fclean all
	@echo "$(GREEN)Cleaned and rebuilt!$(DEF_COLOR)"

.PHONY	:	all clean fclean re