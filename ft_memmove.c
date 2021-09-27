/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 22:36:25 by matmarti          #+#    #+#             */
/*   Updated: 2021/09/27 23:01:53 by matmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 	if (dest > str)
	{
		while (++i <= len)
		{
			dest[len - i] = str[len - i];
		}
	} */

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	*dest;

	i = 0;
	str = (unsigned char *)src;
	dest = (unsigned char *)dst;
	if (dest[0] > str[0])
	{
		while (i <= len)
		{
			i++;
			dest[len - i] = str[len - i];
		}
	}
	while (i < len)
	{
		dest[i] = str[i];
		i++;
	}
	return (dest);
}
