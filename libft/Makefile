_RED	=	\033[31m
_GREAN	=	\033[32m
_YELLOW	=	\033[33m
_BLUE	=	\033[34m
_END	=	\033[0m

NAME		:= libft.a
HEADERPATH	:= ./include/libft.h
CC			:= gcc
GCC_OPTIONS	:= -Wall -Wextra -Werror

SRCS:=	./srcs/ft_atoi.c \
		./srcs/ft_bzero.c \
		./srcs/ft_calloc.c \
		./srcs/ft_isalnum.c \
		./srcs/ft_isalpha.c \
		./srcs/ft_isascii.c \
		./srcs/ft_isdigit.c \
		./srcs/ft_isprint.c \
		./srcs/ft_itoa.c \
		./srcs/ft_lstadd_back.c \
		./srcs/ft_lstadd_front.c \
		./srcs/ft_lstclear.c \
		./srcs/ft_lstdelone.c \
		./srcs/ft_lstiter.c \
		./srcs/ft_lstlast.c \
		./srcs/ft_lstmap.c \
		./srcs/ft_lstnew.c \
		./srcs/ft_lstsize.c \
		./srcs/ft_memccpy.c \
		./srcs/ft_memchr.c \
		./srcs/ft_memcmp.c \
		./srcs/ft_memcpy.c \
		./srcs/ft_memmove.c \
		./srcs/ft_memset.c \
		./srcs/ft_putchar_fd.c \
		./srcs/ft_putendl_fd.c \
		./srcs/ft_putnbr_fd.c \
		./srcs/ft_putstr_fd.c \
		./srcs/ft_split.c \
		./srcs/ft_strchr.c \
		./srcs/ft_strdup.c \
		./srcs/ft_strjoin.c \
		./srcs/ft_strlcat.c \
		./srcs/ft_strlcpy.c \
		./srcs/ft_strlen.c \
		./srcs/ft_strmapi.c \
		./srcs/ft_strncmp.c \
		./srcs/ft_strnstr.c \
		./srcs/ft_strrchr.c \
		./srcs/ft_strtrim.c \
		./srcs/ft_substr.c \
		./srcs/ft_tolower.c \
		./srcs/ft_toupper.c

SRCO:=	./srcs/ft_atol.c \
		./srcs/ft_myatoi.c \
		./srcs/ft_safe_free.c \
		./srcs/ft_null_strlen.c \
		./srcs/get_next_line.c \
		./srcs/ft_dcllist_new.c \
		./srcs/ft_dcllist_add.c \
		./srcs/ft_dcllist_size.c

OBJS:= $(SRCS:.c=.o)
OBJO:= $(SRCO:.c=.o)


all : $(NAME)

$(NAME): $(OBJS) $(OBJO)
	@ar -rcs $(NAME) $(OBJS) $(OBJO)
	@echo "\nFINISH Compiling $(NAME)!"
	@echo "$(_YELLOW)Now, you can use archieve file of $(NAME), by\"-L./libft -lft\"$(_END)"

clean:
	@echo "Removing object files...."
	@rm -f $(OBJS) $(OBJO)

fclean:
	@echo "$(_RED)Removing object files and program....$(_END)"
	@rm	-f $(NAME)
	@rm -f $(OBJS) $(OBJO)

re: fclean all

%.o: %.c $(HEADERPATH)
	@$(CC) -c $(GCC_OPTIONS) -o $@ $< -I./include
	@printf "$(_YELLOW)>$(_END)"


.PHONY: all clean fclean re bonus
