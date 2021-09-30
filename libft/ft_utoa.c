/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hectfern <hectfern@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 20:33:45 by hectfern          #+#    #+#             */
/*   Updated: 2021/09/29 21:01:00 by hectfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_utoa(unsigned int n)
{
	char			*p;
	int				size;
	unsigned int	x;

	x = n;
	size = 0;
	while (x > 10)
	{
		x /= 10;
		size++;
	}
	p = (char *)malloc(sizeof(p) * (size + 1));
	if (!p)
		return (NULL);
	p[size + 1] = '\0';
	while (size >= 0)
	{
		x = n % 10;
		p[size] = 48 + x;
		n = n / 10;
		size--;
	}
	return (p);
}
