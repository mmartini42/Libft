/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 11:38:29 by matmarti          #+#    #+#             */
/*   Updated: 2021/10/04 01:12:25 by mathmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

short	ft_to_find(const char *str, size_t index, const char *to_find)
{
	int	i;

	i = 0;
	while (to_find[i])
	{
		if (to_find[i] != str[index])
			return (0);
		i++;
		index++;
	}
	return (1);
}

char	*ft_strstr(const char *str, const char *to_find)
{
	size_t	i;

	i = 0;
	if (to_find[0] == '\0')
		return ((char *)str);
	while (str[i])
	{
		if (ft_to_find(str, i, to_find))
			return ((char *)&str[i]);
		i++;
	}
	return (NULL);
}
