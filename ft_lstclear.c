/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 00:11:43 by matmarti          #+#    #+#             */
/*   Updated: 2021/10/04 00:00:02 by mathmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **begin, void (*del)(void*))
{
	t_list	*next;

	if (*begin)
	{
		while (*begin)
		{
			next = (*begin)->next;
			ft_lstdelone(*begin, del);
			*begin = next;
		}
		*begin = 0;
	}
}
