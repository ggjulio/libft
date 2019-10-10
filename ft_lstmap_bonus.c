/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 21:15:30 by juligonz          #+#    #+#             */
/*   Updated: 2019/10/10 13:43:35 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(void *))
{
	t_list	*new_list;
	t_list	*iterator;

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
