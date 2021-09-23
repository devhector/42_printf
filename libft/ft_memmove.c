/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hectfern <hectfern@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 16:34:21 by hectfern          #+#    #+#             */
/*   Updated: 2021/08/09 13:31:36 by hectfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void	*s1, const void	*s2, size_t	n)
{
	char		*dst;
	const char	*src;

	if (!s1 && !s2)
		return (NULL);
	dst = (char *)s1;
	src = (const char *)s2;
	if (dst < src)
		ft_memcpy(dst, src, n);
	else
	{
		while (n--)
			dst[n] = src[n];
	}
	return (s1);
}
