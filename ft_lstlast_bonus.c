/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 19:42:08 by juligonz          #+#    #+#             */
/*   Updated: 2019/10/09 19:46:32 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

t_list		*ft_lstlast(t_list *lst)
{
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}