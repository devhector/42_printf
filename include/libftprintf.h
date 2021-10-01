#ifndef LIBFTPRINTF_H
#define LIBFTPRINTF_H

#include <stdarg.h>
#include <unistd.h>
#include "../libft/libft.h"

int	ft_putchar(char c);
int	ft_putnbr(int nbr);
int	ft_putstr(char *str);
int	putnbr_u(unsigned int nbr);
int	puthex(unsigned long nbr, char *base);
int	ft_printf(const char	*format, ...);

#endif