/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 23:52:37 by matmarti          #+#    #+#             */
/*   Updated: 2021/10/03 00:03:16 by matmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *node)
{
	t_list	*lst;

	if (!*alst)
	{
		*alst = node;
		return ;
	}
	lst = *alst;
	while (lst)
	{
		if (lst->next == NULL)
		{
			lst->next = node;
			node->next = NULL;
		}
		lst = lst->next;
	}
}
