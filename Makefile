NAME			= libftprintf.a

SRC = ./src
INCLUDE = ./include
OBJ = ./obj

CFLAGS			= -Wall -Wextra -Werror -g
CC				= clang
FLAGLIB			= -rcs

LIBFT_FOLDER	= ./libft
LIBFT			= ./libft/libft.a

FUNCTIONS		= ft_printf.o

OBJECTS			= $(FUNCTIONS: %.o)

all: $(NAME)

$(NAME): $(OBJECTS) $(LIBFT)
	ar $(FLAGLIB) $(NAME) $(OBJECTS)
	ranlib $(NAME)

$(LIBFT): $(LIBFT_FOLDER)
	make -C $(LIBFT_FOLDER)

$(OBJ)/%.o: $(SRC)/%.c $(INCLUDE)
	$(CC) $(CFLAGS) -c -I $(INCLUDE) $(LIBFT) $< -o $@