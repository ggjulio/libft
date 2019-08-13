/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 20:29:50 by juligonz          #+#    #+#             */
/*   Updated: 2019/08/13 20:29:51 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char *t;

	if (!(t = malloc(sizeof(char) * n)))
		return (NULL);
	ft_memcpy(t, src, n);
	ft_memcpy(dest, t, n);
	free(t);
	return (dest);
}
