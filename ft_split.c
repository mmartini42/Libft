/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 14:03:52 by matmarti          #+#    #+#             */
/*   Updated: 2021/10/02 22:46:41 by matmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(const char *s, char c)
{
	size_t	count;
	size_t	i;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] != c && s[i])
			count++;
		while (s[i] != c && s[i])
			i++;
	}
	return (count);
}

static void	ft_write(char *dest, const char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != c && s[i])
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
}

static void	ft_write_dest(char **dest, const char *s, char c)
{
	size_t	index;
	size_t	i;
	size_t	j;

	i = 0;
	index = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			j = 0;
			while (s[i + j] != c && s[i + j])
				j++;
			dest[index] = (char *)malloc(sizeof(char) * j + 1);
			ft_write(dest[index], (s + i), c);
			i += j;
			index++;
		}
		else
			i++;
	}
	dest[index] = 0;
}

char	**ft_split(const char *s, char c)
{
	char	**dest;
	size_t	count;

	if (!s)
		return (NULL);
	count = ft_count_words(s, c);
	dest = (char **)malloc(sizeof(char *) * count + 1);
	if (!dest)
		return (NULL);
	ft_write_dest(dest, s, c);
	return (dest);
}
