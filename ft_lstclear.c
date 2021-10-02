/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 00:11:43 by matmarti          #+#    #+#             */
/*   Updated: 2021/10/03 00:16:50 by matmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **begin, void (*del)(void*))
{
	t_list	*lst;
	t_list	*next;

	lst = *begin;
	while (lst && lst->next)
	{
		next = lst->next;
		del(lst);
		lst = next;
	}
	del(lst);
	*begin = NULL;
}
