_RED	=	\033[31m
_GREAN	=	\033[32m
_YELLOW	=	\033[33m
_BLUE	=	\033[34m
_END	=	\033[0m

NAME		:= libft.a
HEADERPATH	:= ./libft.h
CC			:= gcc
GCC_OPTIONS	:= -Wall -Wextra -Werror
SRCS		:=	ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
				ft_toupper.c ft_strlen.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strlcpy.c ft_strlcat.c ft_strnstr.c\
				ft_memset.c ft_bzero.c ft_memcpy.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c ft_memcmp.c \
				ft_tolower.c ft_calloc.c ft_strdup.c \
				ft_strjoin.c ft_substr.c ft_itoa.c  ft_strmapi.c ft_strtrim.c ft_split.c\
				ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
				ft_lstnew.c ft_lstlast.c ft_lstsize.c ft_lstadd_front.c\
				ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

SRCO		:= ft_safe_free.c ft_null_strlen.c get_next_line.c


OBJS	:= $(SRCS:.c=.o)
OBJO	:= $(SRCO:.c=.o)

$(NAME): $(OBJS) $(OBJO)
	@ar -rcs $(NAME) $(OBJS) $(OBJO)
	@echo "\nFINISH Compiling $(NAME)!" 
	@echo "$(_YELLOW)Now, you can use archieve file of $(NAME), by\"-L./libft -lft\"$(_END)"

all : $(NAME)

clean:
	@echo "Removing object files...."
	@rm -f $(OBJS)
	@rm -f $(OBJO)

fclean:
	@echo "$(_RED)Removing object files and program....$(_END)"
	@rm	-f $(NAME)
	@rm -f $(OBJS)
	@rm -f $(OBJO)

re: fclean all


%.o: %.c libft.h
	@$(CC) -c $(GCC_OPTIONS) -o $@ $<
	@printf "$(_GREAN)>$(_END)"

.PHONY: all clean fclean re bonus
