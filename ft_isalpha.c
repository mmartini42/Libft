/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 20:51:02 by matmarti          #+#    #+#             */
/*   Updated: 2021/09/30 20:56:54 by matmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	unsigned char	conv;

	conv = (unsigned char)c;
	if ((conv >= 'A' && conv <= 'Z') || (conv >= 'a' && conv <= 'z'))
		return (1);
	return (0);
}
