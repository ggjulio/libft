/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 16:30:55 by juligonz          #+#    #+#             */
/*   Updated: 2019/10/08 19:46:08 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	size *= count;
	if (!(ptr = malloc(size)))
		return (NULL);
	ft_memset(ptr, 0, size);
	return (ptr);
}
