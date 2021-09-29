/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hectfern <hectfern@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 16:03:59 by hectfern          #+#    #+#             */
/*   Updated: 2021/09/29 17:40:15 by hectfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libftprintf.h"

int	ft_printf_arg(const char *fmt, int i, va_list ap);

int ft_putchar(char c)
{
	write (1, &c, 1);
	return (1);
}

int ft_putstr(char *str)
{
	int	len;

	len = ft_strlen(str);
	write (1, str, len);
	return (len);
}

int ft_putnbr(int nbr)
{
	return (ft_putstr(ft_itoa(nbr)));
}

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
		if (format[i] == '%' && ft_strchr("cspdiuxX%", format[i + 1]))
		{
			ret += ft_printf_arg(format, i, ap);
			i++;
		}
		else
			ret += ft_putchar(format[i]);
		i++;
	}
	
	va_end(ap);
	return (ret);
}

int	ft_printf_arg(const char *fmt, int i, va_list ap)
{
	if (fmt[i + 1] == '%')
		return (ft_putchar(fmt[i + 1]));
	else if (fmt[i + 1] == 'c')
		return (ft_putchar(va_arg(ap, int)));
	else if (fmt[i + 1] == 's')
		return (ft_putstr(va_arg(ap, char *)));
	else if (fmt[i + 1] == 'd' || fmt[i + 1] == 'i')
		return (ft_putnbr(va_arg(ap, int)));
	return (0);	 
}
