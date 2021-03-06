/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_remove_if.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/20 13:54:35 by juligonz          #+#    #+#             */
/*   Updated: 2020/09/03 02:06:31 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lst_remove_if(t_list **begin_list, void *content_ref, \
	int (*cmp)(), void (*free_fct)(void *))
{
	t_list	*previous;
	t_list	*actual;
	t_list	*tmp;

	previous = NULL;
	actual = *begin_list;
	while (actual)
	{
		if (cmp(content_ref, actual->content) != 0)
		{
			previous = actual;
			actual = actual->next;
		}
		else
		{
			if (previous != NULL)
				previous->next = actual->next;
			else
				*begin_list = actual->next;
			tmp = actual->next;
			free_fct(actual->content);
			free(actual);
			actual = tmp;
		}
	}
}
