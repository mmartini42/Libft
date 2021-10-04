/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 22:49:25 by matmarti          #+#    #+#             */
/*   Updated: 2021/10/04 01:56:29 by mathmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_size(long nb)
{
	size_t	count;

	count = 0;
	if (nb < 0)
	{
		count++;
		nb *= -1;
	}
	while (nb >= 10)
	{
		count++;
		nb /= 10;
	}
	return (count);
}

static void	ft_add_dest(char *dest, size_t index, long nb)
{
	char	*base;

	base = "0123456789";
	if (nb >= 10)
		ft_add_dest(dest, index - 1, nb / 10);
	dest[index] = base[nb % 10];
}

char	*ft_itoa(int n)
{
	long	nb;
	char	*dest;
	size_t	index;

	index = ft_size(n);
	dest = (char *)malloc(sizeof(char) * index + 2);
	if (!dest)
		return (NULL);
	nb = (long)n;
	if (nb < 0)
	{
		dest[0] = '-';
		nb *= -1;
	}
	ft_add_dest(dest, index, nb);
	dest[index + 1] = '\0';
	return (dest);
}
