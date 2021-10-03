/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hectfern <hectfern@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 18:25:26 by hectfern          #+#    #+#             */
/*   Updated: 2021/10/03 17:22:51 by hectfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libftprintf.h"

int	ft_putchar(char c)
{
	write (1, &c, 1);
	return (1);
}

int	ft_putstr(char *str)
{
	int	len;

	if(!str)
	{
		write (1, "0x0", 6);
		return (0);
	}
	len = ft_strlen(str);
	write (1, str, len);
	return (len);
}

int	ft_putnbr(int nbr)
{
	char	*str;
	int		len;

	str = ft_itoa(nbr);
	len = ft_putstr(str);
	free(str);
	return (len);
}

int	putnbr_u(unsigned int nbr)
{
	char	*str;
	int		len;

	str = ft_utoa(nbr);
	len = ft_putstr(str);
	free(str);
	return (len);
}
