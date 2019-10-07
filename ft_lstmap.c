/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 09:09:53 by juligonz          #+#    #+#             */
/*   Updated: 2019/10/07 18:52:45 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *new_list;
	t_list *iterator;

	iterator = f(lst);
	new_list = iterator;
	while (lst->next != NULL)
	{
		lst = lst->next;
		iterator->next = f(lst);
		iterator = iterator->next;
	}
	return (new_list);
}
