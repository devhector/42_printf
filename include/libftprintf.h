#ifndef LIBFTPRINTF_H
#define LIBFTPRINTF_H

#include <stdarg.h>
#include <unistd.h>
#include "../libft/libft.h"

char	*ft_strchr(const char	*s, int	c);
int		ft_printf(const char	*format, ...);

#endif