NAME			= libftprintf.a

INCLUDE 		= ./include
SRC				= ./src

CFLAGS			= -Wall -Wextra -Werror -g
CC				= gcc
FLAGLIB			= -rcs
RM				= /bin/rm -f

LIBFT_DIR		= ./libft
LIBFT			= ./libft/libft.a

FT_PRINTF		= $(SRC)/ft_printf_utils.c $(SRC)/ft_printf.c 

OBJECTS			= $(FT_PRINTF:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS) $(LIBFT)
	ar $(FLAGLIB) $(NAME) $(OBJECTS)
	ranlib $(NAME)

$(LIBFT): $(LIBFT_DIR)
	$(MAKE) -C $(LIBFT_DIR)

.c.o: $(LIBFT)
	$(CC) $(LIBFT) $(CFLAGS) $(INCLUDE) $< -o ${<:.c=.o}

clean:
	$(MAKE) clean -C $(LIBFT_DIR)
	$(RM) $(OBJECTS)

fclean:		clean
			$(MAKE) fclean -C $(LIBFT_DIR)
			$(RM) $(NAME)

re: fclean all

.PHONY: all re clean fclean