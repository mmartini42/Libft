/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 23:23:15 by mathmart          #+#    #+#             */
/*   Updated: 2021/10/03 23:23:17 by mathmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *str, size_t len)
{
	size_t	i;

	i = 0;
	if (len == 0 || !str)
		return (ft_strlen(str));
	while (str[i] && i < len - 1)
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(str));
}
