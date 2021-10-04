/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 23:59:05 by matmarti          #+#    #+#             */
/*   Updated: 2021/10/04 02:06:09 by mathmart         ###   ########.fr       */
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
	if (s == 0 || set == 0)
		return (0);
	while (s[i] && ft_is_charset(s[i], set))
		i++;
	end = ft_strlen(s) - 1;
	while (end > i && ft_is_charset(s[end], set))
		end--;
	dest = (char *)malloc(sizeof(char) * end - i + 2);
	if (!dest)
		return (NULL);
	j = 0;
	while (i + j <= end)
	{
		dest[j] = s[i + j];
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
