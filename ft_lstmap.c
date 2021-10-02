/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 00:24:57 by matmarti          #+#    #+#             */
/*   Updated: 2021/10/03 00:46:21 by matmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *begin, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lst;
	t_list	*elem;

	elem = ft_lstnew(f(begin->content));
	if (!elem)
	{
		ft_lstclear(&begin, del);
		return (NULL);
	}
	begin = begin->next;
	lst = elem;
	while (begin)
	{
		elem = ft_lstnew(f(begin->content));
		if (!elem)
		{
			ft_lstclear(&begin, del);
			ft_lstclear(&lst, del);
			break ;
		}
		begin = begin->next;
		ft_lstadd_back(&lst, elem);
	}
	return (lst);
}
