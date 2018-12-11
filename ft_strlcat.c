/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jugonzal <gonzalez.julio89@hotmail.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 02:40:37 by jugonzal          #+#    #+#             */
/*   Updated: 2018/08/08 02:40:37 by jugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;

	i = -1;
	j = -1;
	while (dst[++i] && i < size);
	while (src[++j] && i + j + 1 < size)
		dst[i + j] = src[j];
	if (i != size)
		dst[i + j] = '\0';
	return (i + ft_strlen(src));
}
