/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 21:06:09 by matmarti          #+#    #+#             */
/*   Updated: 2021/09/30 21:09:26 by matmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	unsigned char	conv;

	conv = (unsigned char)c;
	if ((conv >= '0' && conv <= '9') || (conv >= 'A' && conv <= 'Z')
		|| (conv >= 'a' && conv <= 'z'))
		return (1);
	return (0);
}
