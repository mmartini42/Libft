/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 23:23:09 by mathmart          #+#    #+#             */
/*   Updated: 2021/10/03 23:23:10 by mathmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	end;

	if (!*s)
		return (0);
	end = 0;
	if (start < ft_strlen(s))
		end = ft_strlen(s) - start;
	if (end > len)
		end = len;
	dest = (char *)malloc(sizeof(char) * end + 1);
	if (!dest)
		return (NULL);
	ft_strlcpy(dest, s + start, end + 1);
	return (dest);
}
