/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jugonzal <gonzalez.julio89@hotmail.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 00:51:45 by jugonzal          #+#    #+#             */
/*   Updated: 2018/08/07 00:51:45 by jugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	j;
	char	*s;

	i = ft_strlen(dest);
	j = 0;
	s = (char *)src;
	while (s[j] && j < n)
		dest[i++] = s[j++];
	dest[i] = '\0';
	return (dest);
}