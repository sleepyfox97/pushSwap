_RED	=	\033[31m
_GREAN	=	\033[32m
_YELLOW	=	\033[33m
_BLUE	=	\033[34m
_END	=	\033[0m

NAME	=	pushswap
CHECKER	=	checker


SRCS_CHECKER	= ./srcs/checker/dcllist_put.c
SRCS_CHECKER	+= ./srcs/checker/ft_exec_rule.c
SRCS_CHECKER	+= ./srcs/checker/ft_rrotate.c
SRCS_CHECKER	+= ./srcs/checker/ft_check_input.c
SRCS_CHECKER	+= ./srcs/checker/ft_initiate.c
SRCS_CHECKER	+= ./srcs/checker/ft_set_contents.c
SRCS_CHECKER	+= ./srcs/checker/ft_check_stack.c
SRCS_CHECKER	+= ./srcs/checker/ft_make_stack.c
SRCS_CHECKER	+= ./srcs/checker/ft_swap.c
SRCS_CHECKER	+= ./srcs/checker/ft_dcllist_clear.c
SRCS_CHECKER	+= ./srcs/checker/ft_push.c
SRCS_CHECKER	+= ./srcs/checker/ft_takenoed.c
SRCS_CHECKER	+= ./srcs/checker/ft_error.c
SRCS_CHECKER	+= ./srcs/checker/ft_rotate.c
SRCS_CHECKER	+= ./srcs/checker/main.c

SRCS_PUSHSWAP	= ./srcs/pushswap/main.c

OBJS_PUSHSWAP = $(SRCS_PUSHSWAP:.c=.o)
OBJS_CHECKER = $(SRCS_CHECKER:.c=.o)

CC	= gcc

CFLAGS = -Wall -Werror -Wextra

all: $(NAME)


$(NAME) : $(OBJS_PUSHSWAP)
	$(CC) $(CFLAGS) $(OBJS_PUSHSWAP) -o $(NAME) -I./include -L./libft -lft
	@echo "\nFINISH Compiling $(NAME)!"
	@echo "$(_YELLOW)Try \"./$(NAME) first$(_END)"

$(CHECKER) : $(OBJS_CHECKER)
	$(CC) $(CFLAGS) $(OBJS_CHECKER) -o $(CHECKER) -I./include -L./libft -lft
	@echo "\nFINISH Compiling $(CHECKER)!"
	@echo "$(_YELLOW)Try \"./$(CHECKER) first$(_END)"

clean:
	@echo "$(_BLUE)Removing object files....$(END)"
	@rm -rf $(OBJS_PUSHSWAP) $(OBJS_CHECKER)

fclean:
	@echo "$(_RED)Removing object files and program....$(_END)"
	@rm -rf $(OBJS_PUSHSWAP) $(OBJS_CHECKER) $(NAME) $(CHECKER)

bonus: $(CHECKER)

re: fclean all

%.o: %.c
	@$(CC) -c $(CFLAGS) -o $@ $< -I./include -L./libft -lft
	@printf "$(_GREAN)>$(_END)"

PHONY: all clean fclean re