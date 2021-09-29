NAME			= libftprintf.a

SRC = ./src
INCLUDE = ./include
OBJ = ./obj

CFLAGS			= -Wall -Wextra -Werror -g
CC				= clang
FLAGLIB			= -rcs

LIBFT_DIR		= ./libft
LIBFT			= ./libft/libft.a

FUNCTIONS		= ft_printf.c

OBJECTS			= $(FUNCTIONS: %.o)

all: $(NAME)

$(NAME): $(OBJECTS) $(LIBFT)
	ar $(FLAGLIB) $(NAME) $(OBJECTS)
	ranlib $(NAME)

$(LIBFT): $(LIBFT_FOLDER)
	$(MAKE) -C $(LIBFT_FOLDER)

%.o: %.c $(INCLUDE)
	$(CC) $(CFLAGS) -c -I $(INCLUDE) $(LIBFT) $< -o $(OBJ)/$@