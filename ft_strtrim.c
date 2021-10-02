/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 23:59:05 by matmarti          #+#    #+#             */
/*   Updated: 2021/10/02 01:57:11 by matmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static short	ft_is_charset(char c, const char *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s, const char *set)
{
	int		end;
	int		i;
	int		j;
	char	*dest;

	i = 0;
	while (s[i] && ft_is_charset(s[i], set))
		i++;
	end = ft_strlen(s) - 1;
	while (s[end] && ft_is_charset(s[end], set))
		end--;
	if (i >= end)
		return (ft_strnew(0));
	dest = (char *)malloc(sizeof(char) * end - i + 1);
	if (!dest)
		return (NULL);
	j = 0;
	while (i <= end)
	{
		dest[j] = s[i];
		i++;
		j++;
	}
	return (dest);
}
