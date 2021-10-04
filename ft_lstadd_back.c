/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 23:52:37 by matmarti          #+#    #+#             */
/*   Updated: 2021/10/04 02:01:58 by mathmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *node)
{
	t_list	*lst;

	if (node)
	{
		if (!*alst)
		{
			*alst = node;
			return ;
		}
		lst = ft_lstlast(*alst);
		lst->next = node;
	}
}
