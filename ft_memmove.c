/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jugonzal <gonzalez.julio89@hotmail.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 15:30:32 by jugonzal          #+#    #+#             */
/*   Updated: 2018/08/05 15:30:32 by jugonzal         ###   ########.fr       */
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