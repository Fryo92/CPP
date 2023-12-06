# Variables

NAME	=	brainz
PROJECT =	Brainz
CC		=	c++
FLAG	=	-Wall -Wextra -Werror -std=c++98


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

FILES	=	main

SRCS	=	$(addsuffix .cpp, $(FILES))
OBJS	=	$(addsuffix .o, $(FILES))
DEP		=
DEPEN	=	$(addsuffix .hpp, $(DEP))
DEPS	=	$(OBJS) $(DEPEN) Makefile

###

all		:	$(NAME)

$(NAME)	:	$(DEPS)
	@echo "$(YELLOW)COMPILING $(PROJECT)...$(DEF_COLOR)"
	$(CC) $(OBJS) $(FLAG) -o $(NAME)
	@echo "$(GREEN)$(PROJECT) compiled!$(DEF_COLOR)"

%.o	:	%.cpp
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
