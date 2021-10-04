/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 21:53:14 by matmarti          #+#    #+#             */
/*   Updated: 2021/10/04 01:07:22 by mathmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	size_t	i;
	char	*dest;

	dest = (char *)malloc(sizeof(char) * size + 1);
	if (!dest)
		return (NULL);
	i = 0;
	while (i <= size)
	{
		dest[i] = 0;
		i++;
	}
	return (dest);
}
