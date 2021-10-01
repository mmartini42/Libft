/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 23:59:05 by matmarti          #+#    #+#             */
/*   Updated: 2021/10/02 00:55:43 by matmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_get_start(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			return (i);
		i++;
	}
	return (-1);
}

static int	ft_get_end(const char *str)
{
	size_t	i;

	i = ft_strlen(str) - 1;
	while (str[i])
	{
		if (!(str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			return (i);
		i--;
	}
	return (-1);
}

char	*ft_strtrim(char const *s)
{
	int	start;
	int	end;
	int	i;
	char	*dest;

	start = ft_get_start(s);
	end = ft_get_end(s);
	if (end == -1 || start == -1)
		return (ft_strnew(0));
	dest = (char *)malloc(sizeof(char) * end - start + 1);
	if (!dest)
		return (NULL);
	i = 0;
	while (start <= end)
	{
		dest[i] = s[start];
		start++;
	}
	return (dest);
}
