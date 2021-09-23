/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hectfern <hectfern@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 16:14:29 by hectfern          #+#    #+#             */
/*   Updated: 2021/08/09 12:36:35 by hectfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void	*s1, const void	*s2, size_t	n)
{
	char		*dst;
	const char	*src;

	if (s1 == s2)
		return (s1);
	dst = (char *)s1;
	src = (const char *)s2;
	while (n--)
	{
		*dst++ = *src++;
	}
	return (s1);
}
