/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 21:35:51 by matmarti          #+#    #+#             */
/*   Updated: 2021/10/04 00:56:11 by mathmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_init(void *s, size_t size)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)s;
	while (i < size)
	{
		str[i] = 0;
		i++;
	}
}

void	*ft_memalloc(size_t size)
{
	void	*mem;

	mem = malloc(sizeof(void *) * size);
	if (!mem)
		return (NULL);
	ft_init(mem, size);
	return (mem);
}
