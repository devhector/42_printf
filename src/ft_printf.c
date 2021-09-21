#include "libftprintf.h"
#include "libft.h"
#include <stdarg.h>

int ft_printf(const char *format, ...)
{
	va_list	ap;
	int		i;
	int		ret;

	i = 0;
	ret = 0;
	va_start(ap, format);
	while (format[i])
	{
		if (format[i] == '%')
			if (ft_strchr("cspdiuxX%", format[i + 1]))
				ret += ft_printf_arg(format, &i, ap);
			else
				ret += ft_putchar(format[i]);
		else
			ret += ft_putchar(format[i]);
		i++;
	}
	
	va_end(ap);
	return (ret);
}

int	ft_printf_arg(const char *fmt, int *i, va_list ap)
{
	if (fmt[*i + 1] == "%")
		return (ft_putchar(fmt[*i + 1]));
	return 0;	 
}
